#include "src/service.h"

#include "grpcpp/grpcpp.h"
#include "src/service.grpc.pb.h"
#include "src/service.pb.h"

namespace tsdb2 {

grpc::Status FooServiceImpl::Foo(grpc::ServerContext* const context,
                                 FooRequest const* const request, FooResponse* const response) {
  // TODO
  return grpc::Status::OK;
}

}  // namespace tsdb2
