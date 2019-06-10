// tests_functions.h - Interface to functions utilized directly by the main
// application code.
//

#ifndef __EXCEPTIONS_CORE_TESTS_FUNCTIONS_H__
#define __EXCEPTIONS_CORE_TESTS_FUNCTIONS_H__

/**
 * @name PrintSoftwareTitleAndCopyright
 * @brief Prints the software title and copyright message to the screen.
 */
void PrintSoftwareTitleAndCopyright();

/**
 * @name TestThrowArgumentException
 * @brief Tests the ThrowArgumentException function.
 */
void TestThrowArgumentException();

/**
 * @name TestThrowArgumentOutOfRangeException
 * @brief Tests the ThrowArgumentOutOfRangeException function.
 */
void TestThrowArgumentOutOfRangeException();

/**
 * @name TestThrowDirectoryNotFoundException
 * @brief Tests the ThrowDirectoryNotFoundException function.
 */
void TestThrowDirectoryNotFoundException();

/**
 * @name TestThrowFileAccessFailedException
 * @brief Tests the ThrowFileAccessFailedException function
 */
void TestThrowFileAccessFailedException();
void TestThrowFileNotFoundException();
void TestGetAndSetFailureExitCode();
void TestThrowMarshalingException();
void TestThrowNullReferenceException();
void TestThrowOutOfMemoryExceptionWithCustomMessage();
void TestThrowOutOfMemoryExceptionWithNullMessage();
void TestThrowUUIDInvalidException();
void TestThrowUUIDNullException();

#endif //__EXCEPTIONS_CORE_TESTS_FUNCTIONS_H__
