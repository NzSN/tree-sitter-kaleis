// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterKaleis",
    products: [
        .library(name: "TreeSitterKaleis", targets: ["TreeSitterKaleis"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterKaleis",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterKaleisTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterKaleis",
            ],
            path: "bindings/swift/TreeSitterKaleisTests"
        )
    ],
    cLanguageStandard: .c11
)
