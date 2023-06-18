#include <iostream>
#include <memory>

#include "absl/flags/flag.h"
#include "absl/flags/parse.h"
#include "absl/strings/str_cat.h"
#include "grpcpp/grpcpp.h"
#include "src/lib.h"
#include "src/service.h"

ABSL_FLAG(int, port, 8080, "Port to listen on.");

int main(int const argc, char* argv[]) {
  absl::ParseCommandLine(argc, argv);

  std::cout << ::tsdb2::Collatz(42) << std::endl;

  ::tsdb2::FooServiceImpl service;

  auto const port = absl::GetFlag(FLAGS_port);
  grpc::ServerBuilder builder;
  builder.AddListeningPort(/*server_address=*/absl::StrCat("0.0.0.0:", port),
                           grpc::InsecureServerCredentials());
  builder.RegisterService(&service);
  std::unique_ptr<grpc::Server> server{builder.BuildAndStart()};
  std::cout << "Listening on port " << port << std::endl;

  server->Wait();

  return 0;
}
