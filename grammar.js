module.exports = grammar({
  name: 'openscad',

  rules: {
      module: $ => repeat($._statement),

      _statement: $ => choice(
          $._simple_statements
      ),

      _simple_statements: $ => seq(
          $._simple_statement,
          $._semicolon,
          $._newline
      ),

      _simple_statement: $ => choice(
          $.include_statement,
          $.use_statement
      ),

      include_statement: $ => seq(
          'include',
          field('path', choice($.system_lib_string))
      ),

      use_statement: $ => seq(
          'use',
          field('path', choice($.system_lib_string))
      ),

      system_lib_string: $ => token(seq(
          '<',
          repeat(choice(/[^>\n]/, '\\>')),
          '>'
      )),

      _semicolon: $ => ';',
      _newline: $ => '\n'
  }
});

