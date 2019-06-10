// exceptions_core_tests_symbols.h - Defines constants and symbols for the
// functions in the exceptions_core_tests library.
//

#ifndef __EXCEPTIONS_CORE_TESTS_SYMBOLS_H__
#define __EXCEPTIONS_CORE_TESTS_SYMBOLS_H__

/**
 * @name AND_I_MUST_PRINT_OUTPUT_FORMAT
 * @brief fprintf format for the message that is to be displayed to the
 * console (STDOUT) by the AndIMustPrint function.
 */
#ifndef AND_I_MUST_PRINT_OUTPUT_FORMAT
#define AND_I_MUST_PRINT_OUTPUT_FORMAT \
  "AndIMustPrint: %s"
#endif //AND_I_MUST_PRINT_OUTPUT_FORMAT

#ifndef IN_CALC_AREA
#define IN_CALC_AREA \
  "In CalcArea\n"
#endif //IN_CALC_AREA

/**
 * @name MESSAGE_ARGUMENT_NAME
 * @brief Used to supply the name of a parameter named 'pszMessage' to
 * the ThrowArgumentException function.
 */
#ifndef MESSAGE_ARGUMENT_NAME
#define MESSAGE_ARGUMENT_NAME \
  "pszMessage"
#endif //MESSAGE_ARGUMENT_NAME

#endif //__EXCEPTIONS_CORE_TESTS_SYMBOLS_H__
