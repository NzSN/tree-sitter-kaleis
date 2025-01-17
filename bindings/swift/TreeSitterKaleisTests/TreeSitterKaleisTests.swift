import XCTest
import SwiftTreeSitter
import TreeSitterKaleis

final class TreeSitterKaleisTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_kaleis())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Kaleis grammar")
    }
}
