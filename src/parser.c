#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 12
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 13
#define ALIAS_COUNT 0
#define TOKEN_COUNT 6
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  anon_sym_include = 1,
  anon_sym_use = 2,
  sym_system_lib_string = 3,
  sym__semicolon = 4,
  sym__newline = 5,
  sym_module = 6,
  sym__statement = 7,
  sym__simple_statements = 8,
  sym__simple_statement = 9,
  sym_include_statement = 10,
  sym_use_statement = 11,
  aux_sym_module_repeat1 = 12,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_include] = "include",
  [anon_sym_use] = "use",
  [sym_system_lib_string] = "system_lib_string",
  [sym__semicolon] = "_semicolon",
  [sym__newline] = "_newline",
  [sym_module] = "module",
  [sym__statement] = "_statement",
  [sym__simple_statements] = "_simple_statements",
  [sym__simple_statement] = "_simple_statement",
  [sym_include_statement] = "include_statement",
  [sym_use_statement] = "use_statement",
  [aux_sym_module_repeat1] = "module_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_use] = anon_sym_use,
  [sym_system_lib_string] = sym_system_lib_string,
  [sym__semicolon] = sym__semicolon,
  [sym__newline] = sym__newline,
  [sym_module] = sym_module,
  [sym__statement] = sym__statement,
  [sym__simple_statements] = sym__simple_statements,
  [sym__simple_statement] = sym__simple_statement,
  [sym_include_statement] = sym_include_statement,
  [sym_use_statement] = sym_use_statement,
  [aux_sym_module_repeat1] = aux_sym_module_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_use] = {
    .visible = true,
    .named = false,
  },
  [sym_system_lib_string] = {
    .visible = true,
    .named = true,
  },
  [sym__semicolon] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__simple_statements] = {
    .visible = false,
    .named = true,
  },
  [sym__simple_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_include_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_use_statement] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_module_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_path = 1,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_path] = "path",
};

static const TSFieldMapSlice ts_field_map_slices[2] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_path, 1},
};

static TSSymbol ts_alias_sequences[2][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead == '<') ADVANCE(2);
      if (lookahead == 'i') ADVANCE(9);
      if (lookahead == 'u') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '>') ADVANCE(15);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '>') ADVANCE(16);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == 'c') ADVANCE(8);
      END_STATE();
    case 5:
      if (lookahead == 'd') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 8:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == 'n') ADVANCE(4);
      END_STATE();
    case 10:
      if (lookahead == 's') ADVANCE(6);
      END_STATE();
    case 11:
      if (lookahead == 'u') ADVANCE(5);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_system_lib_string);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_system_lib_string);
      if (lookahead == '>') ADVANCE(15);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__semicolon);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(18);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 1},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [sym_system_lib_string] = ACTIONS(1),
    [sym__semicolon] = ACTIONS(1),
  },
  [1] = {
    [sym_module] = STATE(7),
    [sym__statement] = STATE(2),
    [sym__simple_statements] = STATE(2),
    [sym__simple_statement] = STATE(8),
    [sym_include_statement] = STATE(8),
    [sym_use_statement] = STATE(8),
    [aux_sym_module_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_include] = ACTIONS(5),
    [anon_sym_use] = ACTIONS(7),
  },
  [2] = {
    [sym__statement] = STATE(3),
    [sym__simple_statements] = STATE(3),
    [sym__simple_statement] = STATE(8),
    [sym_include_statement] = STATE(8),
    [sym_use_statement] = STATE(8),
    [aux_sym_module_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_include] = ACTIONS(5),
    [anon_sym_use] = ACTIONS(7),
  },
  [3] = {
    [sym__statement] = STATE(3),
    [sym__simple_statements] = STATE(3),
    [sym__simple_statement] = STATE(8),
    [sym_include_statement] = STATE(8),
    [sym_use_statement] = STATE(8),
    [aux_sym_module_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_include] = ACTIONS(13),
    [anon_sym_use] = ACTIONS(16),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(19), 3,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_use,
  [6] = 1,
    ACTIONS(21), 1,
      sym_system_lib_string,
  [10] = 1,
    ACTIONS(23), 1,
      sym_system_lib_string,
  [14] = 1,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
  [18] = 1,
    ACTIONS(27), 1,
      sym__semicolon,
  [22] = 1,
    ACTIONS(29), 1,
      sym__semicolon,
  [26] = 1,
    ACTIONS(31), 1,
      sym__semicolon,
  [30] = 1,
    ACTIONS(33), 1,
      sym__newline,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 6,
  [SMALL_STATE(6)] = 10,
  [SMALL_STATE(7)] = 14,
  [SMALL_STATE(8)] = 18,
  [SMALL_STATE(9)] = 22,
  [SMALL_STATE(10)] = 26,
  [SMALL_STATE(11)] = 30,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(5),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(6),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_statements, 3),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [25] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 2, .production_id = 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 2, .production_id = 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_openscad(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
