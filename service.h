#ifndef __TSDB2_TEMPLATE_SERVICE_H__
#define __TSDB2_TEMPLATE_SERVICE_H__

#include "grpcpp/grpcpp.h"
#include "service.grpc.pb.h"
#include "service.pb.h"

namespace tsdb2 {

class FooServiceImpl final : public FooService::Service {
 public:
  grpc::Status Foo(grpc::ServerContext* context, FooRequest const* request,
                   FooResponse* response) override;
};

}  // namespace tsdb2

#endif  // __TSDB2_TEMPLATE_SERVICE_H__
