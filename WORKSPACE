load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
    name = "bazel_skylib",
    sha256 = "66ffd9315665bfaafc96b52278f57c7e2dd09f5ede279ea6d39b2be471e7e3aa",
    urls = ["https://github.com/bazelbuild/bazel-skylib/releases/download/1.4.2/bazel-skylib-1.4.2.tar.gz"],
)

http_archive(
    name = "com_google_googletest",
    sha256 = "ffa17fbc5953900994e2deec164bb8949879ea09b411e07f215bfbb1f87f4632",
    strip_prefix = "googletest-1.13.0",
    urls = ["https://github.com/google/googletest/archive/refs/tags/v1.13.0.zip"],
)

http_archive(
    name = "com_google_benchmark",
    sha256 = "927475805a19b24f9c67dd9765bb4dcc8b10fd7f0e616905cc4fee406bed81a7",
    strip_prefix = "benchmark-1.8.0",
    urls = ["https://github.com/google/benchmark/archive/refs/tags/v1.8.0.zip"],
)

http_archive(
    name = "com_google_absl",
    sha256 = "51d676b6846440210da48899e4df618a357e6e44ecde7106f1e44ea16ae8adc7",
    strip_prefix = "abseil-cpp-20230125.3",
    urls = ["https://github.com/abseil/abseil-cpp/archive/refs/tags/20230125.3.zip"],
)

http_archive(
    name = "com_google_protobuf",
    sha256 = "f6ac7f4b735f9b7c50e45cff845e787eeb4acde9a8955542c9f1f7f95ada876f",
    strip_prefix = "protobuf-23.3",
    urls = ["https://github.com/protocolbuffers/protobuf/releases/download/v23.3/protobuf-23.3.zip"],
)

http_archive(
    name = "rules_proto",
    sha256 = "dc3fb206a2cb3441b485eb1e423165b231235a1ea9b031b4433cf7bc1fa460dd",
    strip_prefix = "rules_proto-5.3.0-21.7",
    urls = ["https://github.com/bazelbuild/rules_proto/archive/refs/tags/5.3.0-21.7.tar.gz"],
)

load("@rules_proto//proto:repositories.bzl", "rules_proto_dependencies", "rules_proto_toolchains")

rules_proto_dependencies()

rules_proto_toolchains()

http_archive(
    name = "com_github_grpc_grpc",
    sha256 = "17c0685da231917a7b3be2671a7b13b550a85fdda5e475313264c5f51c4da3f8",
    strip_prefix = "grpc-1.55.1",
    urls = ["https://github.com/grpc/grpc/archive/refs/tags/v1.55.1.zip"],
)

load("@com_github_grpc_grpc//bazel:grpc_deps.bzl", "grpc_deps")

grpc_deps()

load("@com_github_grpc_grpc//bazel:grpc_extra_deps.bzl", "grpc_extra_deps")

grpc_extra_deps()
