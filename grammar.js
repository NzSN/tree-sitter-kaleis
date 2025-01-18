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
    specification: $ => repeat1($.global_decl),

    global_decl: $ => choice(
      $.global_function_decl,
      $.struct_decl),

    identifier: $ => token(/[0-9A-Za-z_]+/),

    identifier_list: $ =>
      choice(
        seq($.identifier, token(','), $.identifier_list),
        seq($.identifier, optional(token(',')))
      ),

    type_identifier: $ => $.identifier,
    type_annotated: $ => seq(token('::'), $.type_identifier),

    var_decl: $ => seq($.identifier, $.type_annotated),

    argument_list: $ =>
      choice(
        seq($.var_decl, token(','), $.argument_list),
        seq($.var_decl, optional(token(','))),
      ),

    property: $ => seq(token('['), optional($.identifier_list), token(']')),

    function_decl: $ => seq(optional($.property),
                            $.identifier,
                            token('('),
                            optional($.argument_list),
                            token(')'),
                            $.type_annotated),
    global_function_decl: $ => seq($.function_decl, token(';')),

    data_or_method_member: $ => choice($.var_decl, $.function_decl),
    members: $ => choice(
      seq($.data_or_method_member, token(';'),  $.members),
      seq($.data_or_method_member, token(';')),
    ),
    struct_decl: $ =>
      seq(token('interface'),
          $.identifier,
          token('{'),
          $.members,
          token('}'),
          token(';')),
  }
});
