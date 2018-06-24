import PackageDescription

let package = Package(
  name: "CLucene",
  products: [
    .library(name: "CLucene", targets: ["CLucene"])
  ]
  pkgConfig: "liblucene++.pc",
  targets: [
    .target(name: "CLucene")
  ]
)
