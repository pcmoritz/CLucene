import PackageDescription

let package = Package(
    name: "CLucene",
    pkgConfig: "liblucene++.pc",
    providers: [
        .brew(["curl"]),
        .apt(["libcurl4-openssl-dev"])
    ],
    products: [
        // Products define the executables and libraries produced by a package, and make them visible to other packages.
        .library(
            name: "CLucene",
            targets: ["CLucene"]
        )
    ],
    targets: [
        .target(name: "CLucene")
    ]
)
