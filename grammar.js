module.exports = grammar({
  name: 'openscad',

  rules: {
      package: $ => repeat($._statement),
      _statement: $ => choice(
          $._simple_statements
      ),

      _simple_statements: $ => seq(
          $._simple_statement,
          optional($._semicolon),
          $._newline
      ),

      _simple_statement: $ => choice(
          $.include_statement,
          $.use_statement
      ),

      _path: $ => field('path', choice($.system_lib_string)),
      include_statement: $ => seq(
          'include',
          $._path
      ),

      use_statement: $ => seq(
          'use',
          $._path
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

