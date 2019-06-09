// exception_core.h - Interface to the exceptions_core library
//

#ifndef __EXCEPTIONS_CORE_H__
#define __EXCEPTIONS_CORE_H__

/**
 * @name GetFailureExitCode
 * @brief Gets a value that is always returned as the exit code of the calling
 * process when an exception is thrown.
 * @return Value that is always returned to the operating system when a thrown
 * exception forcibly terminates the throwing process.
 */
int GetFailureExitCode();

/**
 * @name SetFailureExitCode
 * @brief Sets the error code to be return when thrown exceptions forcibly
 * terminate the calling executable.  The default is EXIT_FAILURE.
 * @param nExitCode Exit code value to always return from process termination
 * due to thrown exceptions.
 */
void SetFailureExitCode(int nExitCode);

/**
 * @name ThrowArgumentOutOfRangeException
 * @brief Prints an error message about the specified parameter not having a
 * value in the proper range to the console, and then terminates the calling
 * program.
 * @param pszParanName String containing the name of the parameter whose value
 * is not correct.
 * @remarks This function displays the name of the parameter along with a
 * warning message, and then shuts down the calling executable with an exit
 * code returned by the GetFailureExitCode() function.
 */
void ThrowArgumentOutOfRangeException(const char* pszParamName);

/**
 * @name ThrowDirectoryNotFoundException
 * @brief Prints an error message to the effect that the system cannot find
 * the directory specified.
 * @param pszCallingFunctionName Text string representation of the name of the
 * calling function.  Optional (i.e., may be set to NULL).
 * @param pszPath Path to the file that the application is attempting to
 * locate.  Required.
 * @param pszMessage Additional message to write to STDERR. Optional (i.e.,
 * may be set to NULL).
 * @remarks This function writes an error message to STDERR, and then shuts
 * down the calling executable with an exit code returned by the
 * GetFailureExitCode() function.
 */
void ThrowDirectoryNotFoundException(const char* pszCallingFunctionName,
    const char* pszPath, const char* pszMessage);

/**
 * @name ThrowFileAccessFailedException
 * @brief Prints an error message to the effect that the current user is
 * attempting to access a specific file for which the current user does not
 * have sufficient access privileges.
 * @param pszCallingFunctionName Text string representation of the name of the
 * calling function.  Optional (i.e., may be set to NULL).
 * @param pszPath Path to the file that the user is attempting to access.
 * @param pszMessage Additional message to write to STDERR.
 * @remarks This function writes an error message to STDERR, and then shuts
 * down the calling executable with an exit code returned by the
 * GetFailureExitCode() function.
 */
void ThrowFileAccessFailedException(const char* pszCallingFunctionName,
    const char* pszPath, const char* pszMessage);

/**
 * @name ThrowFileNotFoundException
 * @brief Prints an error message to the effect that the system cannot find
 * the file specified.
 * @param pszCallingFunctionName Text string representation of the name of the
 * calling function.  Optional (i.e., may be set to NULL).
 * @param pszPath Path to the file that the application is attempting to
 * locate.
 * @param pszMessage Additional message to write to STDERR.
 * @remarks This function writes an error message to STDERR, and then shuts
 * down the calling executable with an exit code returned by the
 * GetFailureExitCode() function.
 */
void ThrowFileNotFoundException(const char* pszCallingFunctionName,
    const char* pszPath, const char* pszMessage);

/**
 * @name ThrowMarshalingException
 * @brief Writes an error message to STDERR and then terminates the calling
 * process. Meant to be called when a marshaling operation has failed.
 * @param pszMessage Message to display.
 * @remarks This function writes an error message to STDERR and then forcibly
 * terminates the calling process, returning the exit code whose value is
 * returned by the GetFailureExitCode() function.
 */
void ThrowMarshalingException(const char* pszMessage);

/**
 * @name ThrowNullReferenceException
 * @brief Causes the program to report that a NULL pointer was passed to a
 * function that was not expecting it.
 * @remarks This function writes an error message to STDERR and then forcibly
 * terminates the calling process, returning the exit code whose value is
 * returned by the GetFailureExitCode() function.
 */
void ThrowNullReferenceException();

/**
 * @name ThrowUUIDInvalidException
 * @brief Causes the program to report that a UUID value is invalid and then
 * forcibly terminates the program.
 * @remarks This function writes an error message to STDERR and then forcibly
 * terminates the calling process, returning the exit code whose value is
 * returned by the GetFailureExitCode() function.
 */
void ThrowUUIDInvalidException();

/**
 * @name ThrowUUIDNullException
 * @brief Causes the program to report that a UUID value is NULL i.e.,
 * not initialized properly to even the Zero GUID.
 * @remarks This function writes an error message to STDERR and then forcibly
 * terminates the calling process, returning the exit code whose value is
 * returned by the GetFailureExitCode() function.
 */
void ThrowUUIDNullException();

#endif //__EXCEPTIONS_CORE_H__
