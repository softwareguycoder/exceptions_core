// exceptions_core_symbols.h - Defines constants and other symbols utilized
// by the code of the exceptions_core library
//

#ifndef __EXCEPTIONS_CORE_SYMBOLS_H__
#define __EXCEPTIONS_CORE_SYMBOLS_H__

/**
 * @name ERROR_ARGUMENT_EXCEPTION
 * @brief Error message displayed when a required argument is not supplied
 * to a function that needs it.
 * @remarks This message is utilized by the exception function when a
 * custom message is not specified by the caller.
 */
#ifndef ERROR_ARGUMENT_EXCEPTION
#define ERROR_ARGUMENT_EXCEPTION \
    "ERROR (ArgumentException): A required argument was " \
    "not provided.\n"
#endif //ERROR_ARGUMENT_EXCEPTION

/**
 * @name ERROR_FORMAT_ARGUMENT_EXCEPTION
 * @brief Error message displayed when a required argument is not supplied
 * to a function that needs it.
 * @remarks Incorporates the name of the user function parameter that was
 * required but for which a value was not supplied.
 */
#ifndef ERROR_FORMAT_ARGUMENT_EXCEPTION
#define ERROR_FORMAT_ARGUMENT_EXCEPTION \
    "ERROR (ArgumentException): The required argument, '%s', was " \
    "not provided.\n"
#endif //ERROR_FORMAT_ARGUMENT_EXCEPTION

/**
 * @name ERROR_FORMAT_ARGUMENT_OUT_OF_RANGE_EXCEPTION
 * @brief Error message that is displayed when an argument supplied to a
 * user function has a value that is not in the proper range.
 * @remarks Incorporates the name of the user function parameter whose value
 * was not in the required range.
 */
#ifndef ERROR_FORMAT_ARGUMENT_OUT_OF_RANGE_EXCEPTION
#define ERROR_FORMAT_ARGUMENT_OUT_OF_RANGE_EXCEPTION \
    "ERROR (ArgumentOutOfRangeException): The argument '%s' is outside of " \
    "the range of valid values.\n"
#endif //ERROR_FORMAT_ARGUMENT_OUT_OF_RANGE_EXCEPTION

/**
 * @name ERROR_FORMAT_FAILED_ACCESS_FILE
 * @brief Error message displayed by the ThrowFileAccessFailedException
 * function when it knows the path name of the file in question, the custom
 * message is supplied, and the name of the user function is supplied.
 */
#ifndef ERROR_FORMAT_FAILED_ACCESS_FILE
#define ERROR_FORMAT_FAILED_ACCESS_FILE \
    "%s: ERROR (FileAccessFailedException):\n\tCan't access the file '%s'" \
    ".\n\t%s"
#endif //ERROR_FORMAT_FAILED_ACCESS_FILE

/**
 * @name ERROR_FORMAT_FAILED_ACCESS_FILE_NO_MESSAGE_NO_FXNNAME
 * @brief Format used for the message written to STDERR by the
 * ThrowFileAccessFailedException function when no custom message is supplied,
 * and the name of the user function that failed is also not supplied.
 */
#ifndef ERROR_FORMAT_FAILED_ACCESS_FILE_NO_MESSAGE_NO_FXNNAME
#define ERROR_FORMAT_FAILED_ACCESS_FILE_NO_MESSAGE_NO_FXNNAME \
    "ERROR (FileAccessFailedException):\n\tCan't access the file '%s'.\n"
#endif //ERROR_FORMAT_FAILED_ACCESS_FILE_NO_MESSAGE_NO_FXNNAME

/**
 * @name ERROR_FORMAT_FAILED_ACCESS_FILE_NO_MESSAGE_WITH_FXNNAME
 * @brief Format used for the message written to STDERR by the
 * ThrowFileAccessFailedException function when no custom message is supplied,
 * and the name of the user function that failed is supplied.
 */
#ifndef ERROR_FORMAT_FAILED_ACCESS_FILE_NO_MESSAGE_WITH_FXNNAME
#define ERROR_FORMAT_FAILED_ACCESS_FILE_NO_MESSAGE_WITH_FXNNAME \
    "%s: ERROR (FileAccessFailedException):\n\tCan't access the file '%s'.\n"
#endif //ERROR_FORMAT_FAILED_ACCESS_FILE_NO_MESSAGE_WITH_FXNNAME

/**
 * @name ERROR_FORMAT_FAILED_ACCESS_FILE_WITH_MESSAGE_NO_FXNNAME
 * @brief Format used for the message written to STDERR by the
 * ThrowFileAccessFailedException function when a custom message is supplied,
 * and the name of the user function that failed is not supplied.
 */
#ifndef ERROR_FORMAT_FAILED_ACCESS_FILE_WITH_MESSAGE_NO_FXNNAME
#define ERROR_FORMAT_FAILED_ACCESS_FILE_WITH_MESSAGE_NO_FXNNAME \
    "ERROR (FileAccessFailedException):\n\tCan't access the file '%s'.\n\t%s"
#endif //ERROR_FORMAT_FAILED_ACCESS_FILE_WITH_MESSAGE_NO_FXNNAME

/**
 * @name ERROR_FORMAT_FAILED_FIND_FILE_NO_MESSAGE_NO_FXNNAME
 * @brief Format used for the message written to STDERR by the
 * ThrowFileNotFoundException function when no custom message is supplied,
 * and the name of the user function that failed is also not supplied.
 */
#ifndef ERROR_FORMAT_FAILED_FIND_FILE_NO_MESSAGE_NO_FXNNAME
#define ERROR_FORMAT_FAILED_FIND_FILE_NO_MESSAGE_NO_FXNNAME \
  "ERROR (FileNotFoundException):\n\tFile '%s' not found.\n"
#endif //ERROR_FORMAT_FAILED_FIND_FILE_NO_MESSAGE_NO_FXNNAME

/**
 * @name ERROR_FORMAT_FAILED_FIND_FILE
 * @brief Error message displayed by the ThrowFileNotFoundException
 * function when it knows the path name of the file in question, the custom
 * message is supplied, and the name of the user function is supplied.
 */
#ifndef ERROR_FORMAT_FAILED_FIND_FILE
#define ERROR_FORMAT_FAILED_FIND_FILE \
    "%s: ERROR (FileNotFoundException):\n\tFile '%s' not found.\n\t%s"
#endif //ERROR_FORMAT_FAILED_FIND_FILE

/**
 * @name ERROR_FORMAT_FAILED_FIND_FILE_NO_MESSAGE_WITH_FXNNAME
 * @brief Format used for the message written to STDERR by the
 * ThrowFileNotFoundException function when no custom message is supplied,
 * and the name of the user function that failed is supplied.
 */
#ifndef ERROR_FORMAT_FAILED_FIND_FILE_NO_MESSAGE_WITH_FXNNAME
#define ERROR_FORMAT_FAILED_FIND_FILE_NO_MESSAGE_WITH_FXNNAME \
    "%s: ERROR (FileNotFoundException):\n\tFile '%s' not found.\n"
#endif //ERROR_FORMAT_FAILED_FIND_FILE_NO_MESSAGE_WITH_FXNNAME

/**
 * @name ERROR_FORMAT_FAILED_FIND_FILE_WITH_MESSAGE_NO_FXNNAME
 * @brief Format used for the message written to STDERR by the
 * ThrowFileNotFoundException function when a custom message is supplied,
 * and the name of the user function that failed is not supplied.
 */
#ifndef ERROR_FORMAT_FAILED_FIND_FILE_WITH_MESSAGE_NO_FXNNAME
#define ERROR_FORMAT_FAILED_FIND_FILE_WITH_MESSAGE_NO_FXNNAME \
    "ERROR (FileNotFoundException):\n\tFile '%s' not found.\n\t%s"
#endif //ERROR_FORMAT_FAILED_FIND_FILE_WITH_MESSAGE_NO_FXNNAME

/**
 * @name ERROR_FORMAT_FAILED_FIND_DIR
 * @brief Error message displayed by the ThrowDirectoryNotFoundException
 * function when it knows the path name of the file in question, the custom
 * message is supplied, and the name of the user function is supplied.
 */
#ifndef ERROR_FORMAT_FAILED_FIND_DIR
#define ERROR_FORMAT_FAILED_FIND_DIR \
  "%s: ERROR (DirectoryNotFoundException):\n\tFolder '%s' not found.\n\t%s"
#endif //ERROR_FORMAT_FAILED_FIND_DIR

/**
 * @name ERROR_FORMAT_FAILED_FIND_DIR_NO_MESSAGE_NO_FXNNAME
 * @brief Format used for the message written to STDERR by the
 * ThrowDirectoryNotFoundException function when no custom message is supplied,
 * and the name of the user function that failed is also not supplied.
 */
#ifndef ERROR_FORMAT_FAILED_FIND_DIR_NO_MESSAGE_NO_FXNNAME
#define ERROR_FORMAT_FAILED_FIND_DIR_NO_MESSAGE_NO_FXNNAME \
  "ERROR (DirectoryNotFoundException):\n\tFolder '%s' not found.\n"
#endif //ERROR_FORMAT_FAILED_FIND_DIR_NO_MESSAGE_NO_FXNNAME

/**
 * @name ERROR_FORMAT_FAILED_FIND_DIR_WITH_FXNNAME_NO_MESSAGE
 * @brief Format used for the message written to STDERR by the
 * ThrowDirectoryNotFoundException function when no custom message is supplied,
 * and the name of the user function that failed is supplied.
 */
#ifndef ERROR_FORMAT_FAILED_FIND_DIR_WITH_FXNNAME_NO_MESSAGE
#define ERROR_FORMAT_FAILED_FIND_DIR_WITH_FXNNAME_NO_MESSAGE \
  "%s: ERROR (DirectoryNotFoundException):\n\tFolder '%s' not found."
#endif //ERROR_FORMAT_FAILED_FIND_DIR_WITH_FXNNAME_NO_MESSAGE

/**
 * @name ERROR_FORMAT_FAILED_FIND_DIR_WITH_MESSAGE_NO_FXNNAME
 * @brief Format used for the message written to STDERR by the
 * ThrowDirectoryNotFoundException function when a custom message is supplied,
 * and the name of the user function that failed is not supplied.
 */
#ifndef ERROR_FORMAT_FAILED_FIND_DIR_WITH_MESSAGE_NO_FXNNAME
#define ERROR_FORMAT_FAILED_FIND_DIR_WITH_MESSAGE_NO_FXNNAME \
    "ERROR (DirectoryNotFoundException):\n\tFolder '%s' not found.\n\t%s"
#endif //ERROR_FORMAT_FAILED_FIND_DIR_WITH_MESSAGE_NO_FXNNAME

/**
 * @name ERROR_FORMAT_MARSHALING_EXCEPTION
 * @brief Defines the fprintf format string for the error that gets displayed
 * to the user when the system fails to marshal a block across a thread
 * boundary or other boundary.
 */
#ifndef ERROR_FORMAT_MARSHALING_EXCEPTION
#define ERROR_FORMAT_MARSHALING_EXCEPTION \
  "ERROR (MarshalingException): %s"
#endif //ERROR_FORMAT_MARSHALING_EXCEPTION

/**
 * @name ERROR_INVALID_PTR_ARG_EXCEPTION
 * @brief Error message that is displayed when a fucntion is passed a pointer
 * that should not be NULL.
 */
#ifndef ERROR_INVALID_PTR_ARG_EXCEPTION
#define ERROR_INVALID_PTR_ARG_EXCEPTION \
    "ERROR (NullReferenceException):\n\tA NULL pointer was passed to a " \
    "that wasn't expecting it.\n"
#endif //ERROR_INVALID_PTR_ARG_EXCEPTION

/**
 * @name ERROR_OUT_OF_MEMORY_EXCEPTION_CUSTOM_MESSAGE
 * @brief Format string for fprintf that allows the caller of the
 * ThrowOutOfMemoryException function to supply a custom message.
 * @remarks The error message informs the interactive user of failure to
 * allocate memory and incorporates the custom message supplied by the caller.
 */
#ifndef ERROR_OUT_OF_MEMORY_EXCEPTION_CUSTOM_MESSAGE
#define ERROR_OUT_OF_MEMORY_EXCEPTION_CUSTOM_MESSAGE \
  "ERROR (OutOfMemoryException):  %s"
#endif //ERROR_OUT_OF_MEMORY_EXCEPTION_CUSTOM_MESSAGE

/**
 * @name ERROR_OUT_OF_MEMORY_EXCEPTION_DEFAULT_MESSAGE
 * @brief Error message that is displayed for the ThrowOutOfMemoryException
 * function if the caller does not supply a custom message.
 * @remarks The error message informs the interactive user or error console
 * that the system failed to allocate storage.
 */
#ifndef ERROR_OUT_OF_MEMORY_EXCEPTION_DEFAULT_MESSAGE
#define ERROR_OUT_OF_MEMORY_EXCEPTION_DEFAULT_MESSAGE \
  "ERROR (OutOfMemoryException):  The system was unable to allocate storage.\n"
#endif //ERROR_OUT_OF_MEMORY_EXCEPTION_DEFAULT_MESSAGE

/**
 * @name ERROR_UUID_INVALID_EXCEPTION
 * @brief Error message that is displayed when a function attempts to work
 * with a UUID value that is invalid.
 */
#ifndef ERROR_UUID_INVALID_EXCEPTION
#define ERROR_UUID_INVALID_EXCEPTION \
  "ERROR (UUIDInvalidException): Invalid UUID value encountered.\n"
#endif //ERROR_UUID_INVALID_EXCEPTION

/**
 * @name ERROR_UUID_NULL_EXCEPTION
 * @brief Error message that is displayed when the caller passes a NULL value
 * for a pointer meant to be filled in.
 */
#ifndef ERROR_UUID_NULL_EXCEPTION
#define ERROR_UUID_NULL_EXCEPTION \
  "ERROR (UUIDNullException):\n\tFunction expected a pointer to a UUID " \
  "and NULL was passed.\n"
#endif //ERROR_UUID_NULL_EXCEPTION

#endif //__EXCEPTIONS_CORE_SYMBOLS_H__
