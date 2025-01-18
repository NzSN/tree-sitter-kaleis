#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 47
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_COMMA = 2,
  anon_sym_COLON_COLON = 3,
  anon_sym_LBRACK = 4,
  anon_sym_RBRACK = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  anon_sym_SEMI = 8,
  anon_sym_interface = 9,
  anon_sym_LBRACE = 10,
  anon_sym_RBRACE = 11,
  sym_specification = 12,
  sym_global_decl = 13,
  sym_identifier_list = 14,
  sym_type_identifier = 15,
  sym_type_annotated = 16,
  sym_var_decl = 17,
  sym_argument_list = 18,
  sym_property = 19,
  sym_function_decl = 20,
  sym_global_function_decl = 21,
  sym_data_or_method_member = 22,
  sym_members = 23,
  sym_struct_decl = 24,
  aux_sym_specification_repeat1 = 25,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_SEMI] = ";",
  [anon_sym_interface] = "interface",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_specification] = "specification",
  [sym_global_decl] = "global_decl",
  [sym_identifier_list] = "identifier_list",
  [sym_type_identifier] = "type_identifier",
  [sym_type_annotated] = "type_annotated",
  [sym_var_decl] = "var_decl",
  [sym_argument_list] = "argument_list",
  [sym_property] = "property",
  [sym_function_decl] = "function_decl",
  [sym_global_function_decl] = "global_function_decl",
  [sym_data_or_method_member] = "data_or_method_member",
  [sym_members] = "members",
  [sym_struct_decl] = "struct_decl",
  [aux_sym_specification_repeat1] = "specification_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_interface] = anon_sym_interface,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_specification] = sym_specification,
  [sym_global_decl] = sym_global_decl,
  [sym_identifier_list] = sym_identifier_list,
  [sym_type_identifier] = sym_type_identifier,
  [sym_type_annotated] = sym_type_annotated,
  [sym_var_decl] = sym_var_decl,
  [sym_argument_list] = sym_argument_list,
  [sym_property] = sym_property,
  [sym_function_decl] = sym_function_decl,
  [sym_global_function_decl] = sym_global_function_decl,
  [sym_data_or_method_member] = sym_data_or_method_member,
  [sym_members] = sym_members,
  [sym_struct_decl] = sym_struct_decl,
  [aux_sym_specification_repeat1] = aux_sym_specification_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_interface] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_specification] = {
    .visible = true,
    .named = true,
  },
  [sym_global_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier_list] = {
    .visible = true,
    .named = true,
  },
  [sym_type_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_type_annotated] = {
    .visible = true,
    .named = true,
  },
  [sym_var_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [sym_function_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_global_function_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_data_or_method_member] = {
    .visible = true,
    .named = true,
  },
  [sym_members] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_decl] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_specification_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(3);
      ADVANCE_MAP(
        '(', 17,
        ')', 18,
        ',', 13,
        ':', 2,
        ';', 19,
        '[', 15,
        ']', 16,
        'i', 9,
        '{', 21,
        '}', 22,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 1:
      if (lookahead == ')') ADVANCE(18);
      if (lookahead == '[') ADVANCE(15);
      if (lookahead == ']') ADVANCE(16);
      if (lookahead == '}') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 2:
      if (lookahead == ':') ADVANCE(14);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_interface);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_interface] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_specification] = STATE(32),
    [sym_global_decl] = STATE(3),
    [sym_property] = STATE(38),
    [sym_function_decl] = STATE(41),
    [sym_global_function_decl] = STATE(6),
    [sym_struct_decl] = STATE(6),
    [aux_sym_specification_repeat1] = STATE(3),
    [sym_identifier] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_interface] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(14), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_interface,
    STATE(38), 1,
      sym_property,
    STATE(41), 1,
      sym_function_decl,
    STATE(2), 2,
      sym_global_decl,
      aux_sym_specification_repeat1,
    STATE(6), 2,
      sym_global_function_decl,
      sym_struct_decl,
  [27] = 8,
    ACTIONS(3), 1,
      sym_identifier,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(7), 1,
      anon_sym_interface,
    ACTIONS(20), 1,
      ts_builtin_sym_end,
    STATE(38), 1,
      sym_property,
    STATE(41), 1,
      sym_function_decl,
    STATE(2), 2,
      sym_global_decl,
      aux_sym_specification_repeat1,
    STATE(6), 2,
      sym_global_function_decl,
      sym_struct_decl,
  [54] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(22), 1,
      sym_identifier,
    ACTIONS(24), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      sym_property,
    STATE(43), 1,
      sym_data_or_method_member,
    STATE(44), 1,
      sym_members,
    STATE(45), 2,
      sym_var_decl,
      sym_function_decl,
  [77] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(22), 1,
      sym_identifier,
    STATE(35), 1,
      sym_members,
    STATE(38), 1,
      sym_property,
    STATE(43), 1,
      sym_data_or_method_member,
    STATE(45), 2,
      sym_var_decl,
      sym_function_decl,
  [97] = 2,
    ACTIONS(26), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(28), 2,
      sym_identifier,
      anon_sym_interface,
  [106] = 4,
    ACTIONS(30), 1,
      sym_identifier,
    ACTIONS(32), 1,
      anon_sym_RPAREN,
    STATE(18), 1,
      sym_var_decl,
    STATE(25), 1,
      sym_argument_list,
  [119] = 2,
    ACTIONS(34), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(36), 2,
      sym_identifier,
      anon_sym_interface,
  [128] = 2,
    ACTIONS(38), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(40), 2,
      sym_identifier,
      anon_sym_interface,
  [137] = 4,
    ACTIONS(30), 1,
      sym_identifier,
    ACTIONS(42), 1,
      anon_sym_RPAREN,
    STATE(18), 1,
      sym_var_decl,
    STATE(39), 1,
      sym_argument_list,
  [150] = 4,
    ACTIONS(30), 1,
      sym_identifier,
    ACTIONS(44), 1,
      anon_sym_RPAREN,
    STATE(18), 1,
      sym_var_decl,
    STATE(36), 1,
      sym_argument_list,
  [163] = 3,
    ACTIONS(46), 1,
      sym_identifier,
    ACTIONS(48), 1,
      anon_sym_RBRACK,
    STATE(31), 1,
      sym_identifier_list,
  [173] = 3,
    ACTIONS(46), 1,
      sym_identifier,
    ACTIONS(50), 1,
      anon_sym_RBRACK,
    STATE(33), 1,
      sym_identifier_list,
  [183] = 1,
    ACTIONS(52), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [189] = 1,
    ACTIONS(54), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [195] = 1,
    ACTIONS(56), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [201] = 3,
    ACTIONS(58), 1,
      anon_sym_COLON_COLON,
    ACTIONS(60), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym_type_annotated,
  [211] = 2,
    ACTIONS(62), 1,
      anon_sym_COMMA,
    ACTIONS(64), 1,
      anon_sym_RPAREN,
  [218] = 2,
    ACTIONS(58), 1,
      anon_sym_COLON_COLON,
    STATE(30), 1,
      sym_type_annotated,
  [225] = 2,
    ACTIONS(66), 1,
      anon_sym_COMMA,
    ACTIONS(68), 1,
      anon_sym_RBRACK,
  [232] = 2,
    ACTIONS(70), 1,
      sym_identifier,
    STATE(15), 1,
      sym_type_identifier,
  [239] = 2,
    ACTIONS(58), 1,
      anon_sym_COLON_COLON,
    STATE(40), 1,
      sym_type_annotated,
  [246] = 2,
    ACTIONS(58), 1,
      anon_sym_COLON_COLON,
    STATE(14), 1,
      sym_type_annotated,
  [253] = 2,
    ACTIONS(58), 1,
      anon_sym_COLON_COLON,
    STATE(46), 1,
      sym_type_annotated,
  [260] = 1,
    ACTIONS(44), 1,
      anon_sym_RPAREN,
  [264] = 1,
    ACTIONS(72), 1,
      sym_identifier,
  [268] = 1,
    ACTIONS(60), 1,
      anon_sym_LPAREN,
  [272] = 1,
    ACTIONS(74), 1,
      sym_identifier,
  [276] = 1,
    ACTIONS(76), 1,
      sym_identifier,
  [280] = 1,
    ACTIONS(78), 1,
      anon_sym_SEMI,
  [284] = 1,
    ACTIONS(80), 1,
      anon_sym_RBRACK,
  [288] = 1,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
  [292] = 1,
    ACTIONS(84), 1,
      anon_sym_RBRACK,
  [296] = 1,
    ACTIONS(86), 1,
      anon_sym_LBRACE,
  [300] = 1,
    ACTIONS(88), 1,
      anon_sym_RBRACE,
  [304] = 1,
    ACTIONS(90), 1,
      anon_sym_RPAREN,
  [308] = 1,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
  [312] = 1,
    ACTIONS(94), 1,
      sym_identifier,
  [316] = 1,
    ACTIONS(96), 1,
      anon_sym_RPAREN,
  [320] = 1,
    ACTIONS(98), 1,
      anon_sym_SEMI,
  [324] = 1,
    ACTIONS(100), 1,
      anon_sym_SEMI,
  [328] = 1,
    ACTIONS(102), 1,
      anon_sym_SEMI,
  [332] = 1,
    ACTIONS(104), 1,
      anon_sym_SEMI,
  [336] = 1,
    ACTIONS(106), 1,
      anon_sym_RBRACE,
  [340] = 1,
    ACTIONS(108), 1,
      anon_sym_SEMI,
  [344] = 1,
    ACTIONS(110), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 54,
  [SMALL_STATE(5)] = 77,
  [SMALL_STATE(6)] = 97,
  [SMALL_STATE(7)] = 106,
  [SMALL_STATE(8)] = 119,
  [SMALL_STATE(9)] = 128,
  [SMALL_STATE(10)] = 137,
  [SMALL_STATE(11)] = 150,
  [SMALL_STATE(12)] = 163,
  [SMALL_STATE(13)] = 173,
  [SMALL_STATE(14)] = 183,
  [SMALL_STATE(15)] = 189,
  [SMALL_STATE(16)] = 195,
  [SMALL_STATE(17)] = 201,
  [SMALL_STATE(18)] = 211,
  [SMALL_STATE(19)] = 218,
  [SMALL_STATE(20)] = 225,
  [SMALL_STATE(21)] = 232,
  [SMALL_STATE(22)] = 239,
  [SMALL_STATE(23)] = 246,
  [SMALL_STATE(24)] = 253,
  [SMALL_STATE(25)] = 260,
  [SMALL_STATE(26)] = 264,
  [SMALL_STATE(27)] = 268,
  [SMALL_STATE(28)] = 272,
  [SMALL_STATE(29)] = 276,
  [SMALL_STATE(30)] = 280,
  [SMALL_STATE(31)] = 284,
  [SMALL_STATE(32)] = 288,
  [SMALL_STATE(33)] = 292,
  [SMALL_STATE(34)] = 296,
  [SMALL_STATE(35)] = 300,
  [SMALL_STATE(36)] = 304,
  [SMALL_STATE(37)] = 308,
  [SMALL_STATE(38)] = 312,
  [SMALL_STATE(39)] = 316,
  [SMALL_STATE(40)] = 320,
  [SMALL_STATE(41)] = 324,
  [SMALL_STATE(42)] = 328,
  [SMALL_STATE(43)] = 332,
  [SMALL_STATE(44)] = 336,
  [SMALL_STATE(45)] = 340,
  [SMALL_STATE(46)] = 344,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2, 0, 0),
  [11] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_specification_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [14] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_specification_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_specification, 1, 0, 0),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_members, 2, 0, 0),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_decl, 1, 0, 0),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_decl, 1, 0, 0),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_function_decl, 2, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_function_decl, 2, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_decl, 6, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_decl, 6, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_list, 2, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_decl, 2, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_annotated, 2, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_identifier, 1, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 1, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_list, 1, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 3, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 2, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_decl, 4, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [82] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_list, 3, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_decl, 5, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_members, 3, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_or_method_member, 1, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_decl, 6, 0, 0),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_kaleis(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
