import PackageDescription

let package = Package(
  name: "CLucene",
  pkgConfig: "liblucene++.pc",
  products: [
    .library(name: "CLucene", targets: ["CLucene"])
  ],
  targets: [
    .target(name: "CLucene")
  ]
)
