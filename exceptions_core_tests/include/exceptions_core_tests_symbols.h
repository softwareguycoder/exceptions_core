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

/**
 * @name CALLING_AND_I_MUST_PRINT_WITH_INVALID_INPUT
 * @brief Message displayed to the console to let the interactive user
 * know we are calling the AndIMustPrint function with invalid input.
 */
#ifndef CALLING_AND_I_MUST_PRINT_WITH_INVALID_INPUT
#define CALLING_AND_I_MUST_PRINT_WITH_INVALID_INPUT \
  "Calling AndIMustPrint with its required parameter set to NULL...\n"
#endif //CALLING_AND_I_MUST_PRINT_WITH_INVALID_INPUT
/**
 * @name CALLING_AND_I_MUST_PRINT_WITH_VALID_INPUT
 * @brief Message displayed on the console to explain that we are calling the
 * AndIMustPrint function with valid input.
 */
#ifndef CALLING_AND_I_MUST_PRINT_WITH_VALID_INPUT
#define CALLING_AND_I_MUST_PRINT_WITH_VALID_INPUT \
  "Calling AndIMustPrint with a valid message...\n"
#endif //CALLING_AND_I_MUST_PRINT_WITH_VALID_INPUT

/**
 * @name CODE_SHOULD_NEVER_GET_HERE
 * @brief Message displayed to the console informing the interactive user
 * that the code execution should not reach this point. If you see this message
 * when executing this software, then something went wrong.
 */
#ifndef CODE_SHOULD_NEVER_GET_HERE
#define CODE_SHOULD_NEVER_GET_HERE \
  "The code should never get here.\n"
#endif //CODE_SHOULD_NEVER_GET_HERE

/**
 * @name HELLO_WORLD
 * @brief Message used to display Hello, world! to the console, for testing
 * purposes.
 */
#ifndef HELLO_WORLD
#define HELLO_WORLD "Hello, world!\n"
#endif //HELLO_WORLD

#ifndef IN_CALC_AREA
#define IN_CALC_AREA \
  "In CalcArea\n"
#endif //IN_CALC_AREA

/**
 * @name IN_TEST_THROW_ARGUMENT_EXCEPTION
 * @brief Message displayed on console to inform interactive user that the
 * execution has reached the TestThrowArgumentException function.
 */
#ifndef IN_TEST_THROW_ARGUMENT_EXCEPTION
#define IN_TEST_THROW_ARGUMENT_EXCEPTION \
  "In TestThrowArgumentException\n"
#endif //IN_TEST_THROW_ARGUMENT_EXCEPTION

/**
 * @name MESSAGE_ARGUMENT_NAME
 * @brief Used to supply the name of a parameter named 'pszMessage' to
 * the ThrowArgumentException function.
 */
#ifndef MESSAGE_ARGUMENT_NAME
#define MESSAGE_ARGUMENT_NAME \
  "pszMessage"
#endif //MESSAGE_ARGUMENT_NAME

/**
 * @name SIDE_LENGTH_ARGUMENT_NAME
 * @brief Used to display the name of the argument to CalcArea.
 */
#ifndef SIDE_LENGTH_ARGUMENT_NAME
#define SIDE_LENGTH_ARGUMENT_NAME \
    "nSideLength"
#endif //SIDE_LENGTH_ARGUMENT_NAME

/**
 * @name SOFTWARE_COPYRIGHT
 * @brief Used to display the software's copyright message on the console.
 */
#ifndef SOFTWARE_COPYRIGHT
#define SOFTWARE_COPYRIGHT \
  "Copyright (c) 2019 by Brian Hart\n\n"
#endif //SOFTWARE_COPYRIGHT

/**
 * @name SOFTWARE_TITLE
 * @brief Used to display this software's title on the console.
 */
#ifndef SOFTWARE_TITLE
#define SOFTWARE_TITLE \
  "exceptions_core Library Test Harness v1.0\n"
#endif //SOFTWARE_TITLE

#endif //__EXCEPTIONS_CORE_TESTS_SYMBOLS_H__
