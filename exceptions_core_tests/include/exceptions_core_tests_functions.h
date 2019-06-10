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

/**
 * @name TestThrowFileNotFoundException
 * @brief Tests the ThrowFileNotFoundException function.
 */
void TestThrowFileNotFoundException();

/**
 * @name TestGetAndSetFailureExitCode
 * @brief Tests the GetFailureExitCode and SetFailureExitCode functions.
 */
void TestGetAndSetFailureExitCode();

/**
 * @name TestThrowMarshalingException
 * @brief Tests the ThrowMarshalingException function.
 */
void TestThrowMarshalingException();

/**
 * @name TestThrowNullReferenceException
 * @brief Tests the ThrowNullReferenceException function.
 */
void TestThrowNullReferenceException();

/**
 * @name TestThrowOutOfMemoryExceptionWithCustomMessage
 * @brief Tests the ThrowOutOfMemoryException function with a user-supplied
 * message.
 */
void TestThrowOutOfMemoryExceptionWithCustomMessage();

/**
 * @name TestThrowOutOfMemoryExceptionWithNullMessage
 * @brief Tests the ThrowOutOfMemoryException function with a default message.
 */
void TestThrowOutOfMemoryExceptionWithNullMessage();

/**
 * @name TestThrowUUIDInvalidException
 * @brief Tests the ThrowUUIDInvalidException function.
 */
void TestThrowUUIDInvalidException();

/**
 * @name TestThrowUUIDNullException
 * @brief Tests the TestThrowUUIDNullException function.
 */
void TestThrowUUIDNullException();

#endif //__EXCEPTIONS_CORE_TESTS_FUNCTIONS_H__
