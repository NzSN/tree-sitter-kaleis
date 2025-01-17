/**
 * @file An Interface Definition Language
 * @author NzSN <nzsn0101@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "kaleis",

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => "hello"
  }
});
