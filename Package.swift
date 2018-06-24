import PackageDescription

let package = Package(
  name: "CLucene",
  pkgConfig: "liblucene++.pc",
  targets: [
    .target(name: "CLucene")
  ],
  products: [
    // Products define the executables and libraries produced by a package, and make them visible to other packages.
    .library(
      name: "CLucene",
      targets: ["CLucene"]
    )
  ]
)
