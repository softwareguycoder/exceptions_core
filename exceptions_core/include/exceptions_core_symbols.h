// exceptions_core_symbols.h - Defines constants and other symbols utilized
// by the code of the exceptions_core library
//

#ifndef __EXCEPTIONS_CORE_SYMBOLS_H__
#define __EXCEPTIONS_CORE_SYMBOLS_H__

#ifndef ERROR_OUT_OF_MEMORY_EXCEPTION_DEFAULT_MESSAGE
#define ERROR_OUT_OF_MEMORY_EXCEPTION_DEFAULT_MESSAGE \
  "ERROR (OutOfMemoryException):  The system was unable to allocate storage.\n"
#endif //ERROR_OUT_OF_MEMORY_EXCEPTION_DEFAULT_MESSAGE

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

#ifndef ERROR_UUID_INVALID_EXCEPTION
#define ERROR_UUID_INVALID_EXCEPTION \
  "ERROR (UUIDInvalidException): Invalid UUID value encountered.\n"
#endif //ERROR_UUID_INVALID_EXCEPTION

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

#ifndef ERROR_FORMAT_ARGUMENT_EXCEPTION
#define ERROR_FORMAT_ARGUMENT_EXCEPTION \
    "ERROR (ArgumentOutOfRangeException): The required argument, '%s', was " \
    "not provided.\n"
#endif //ERROR_FORMAT_ARGUMENT_EXCEPTION

#ifndef ERROR_ARGUMENT_EXCEPTION
#define ERROR_ARGUMENT_EXCEPTION \
    "ERROR (ArgumentOutOfRangeException): A required argument was " \
    "not provided.\n"
#endif //ERROR_ARGUMENT_EXCEPTION

#ifndef ERROR_FORMAT_ARGUMENT_OUT_OF_RANGE_EXCEPTION
#define ERROR_FORMAT_ARGUMENT_OUT_OF_RANGE_EXCEPTION \
    "ERROR (ArgumentOutOfRangeException): The argument '%s' is outside of " \
    "the range of valid values.\n"
#endif //ERROR_FORMAT_ARGUMENT_OUT_OF_RANGE_EXCEPTION

#ifndef ERROR_FORMAT_FAILED_ACCESS_FILE_NO_MESSAGE_NO_FXNNAME
#define ERROR_FORMAT_FAILED_ACCESS_FILE_NO_MESSAGE_NO_FXNNAME \
    "ERROR (FileAccessFailedException):\n\tCan't access the file '%s'.\n"
#endif //ERROR_FORMAT_FAILED_ACCESS_FILE_NO_MESSAGE_NO_FXNNAME

#ifndef ERROR_FORMAT_FAILED_ACCESS_FILE_WITH_MESSAGE_NO_FXNNAME
#define ERROR_FORMAT_FAILED_ACCESS_FILE_WITH_MESSAGE_NO_FXNNAME \
    "ERROR (FileAccessFailedException):\n\tCan't access the file '%s'.\n\t%s"
#endif //ERROR_FORMAT_FAILED_ACCESS_FILE_WITH_MESSAGE_NO_FXNNAME

#ifndef ERROR_FORMAT_FAILED_ACCESS_FILE_NO_MESSAGE_WITH_FXNNAME
#define ERROR_FORMAT_FAILED_ACCESS_FILE_NO_MESSAGE_WITH_FXNNAME \
    "%s: ERROR (FileAccessFailedException):\n\tCan't access the file '%s'.\n"
#endif //ERROR_FORMAT_FAILED_ACCESS_FILE_NO_MESSAGE_WITH_FXNNAME

#ifndef ERROR_FORMAT_FAILED_ACCESS_FILE
#define ERROR_FORMAT_FAILED_ACCESS_FILE \
    "%s: ERROR (FileAccessFailedException):\n\tCan't access the file '%s'.\n\t%s"
#endif //ERROR_FORMAT_FAILED_ACCESS_FILE

#ifndef ERROR_FORMAT_FAILED_FIND_FILE_NO_MESSAGE_NO_FXNNAME
#define ERROR_FORMAT_FAILED_FIND_FILE_NO_MESSAGE_NO_FXNNAME \
  "ERROR (FileNotFoundException):\n\tFile '%s' not found.\n"
#endif //ERROR_FORMAT_FAILED_FIND_FILE_NO_MESSAGE_NO_FXNNAME

#ifndef ERROR_FORMAT_FAILED_FIND_FILE_WITH_MESSAGE_NO_FXNNAME
#define ERROR_FORMAT_FAILED_FIND_FILE_WITH_MESSAGE_NO_FXNNAME \
    "ERROR (FileNotFoundException):\n\tFile '%s' not found.\n\t%s"
#endif //ERROR_FORMAT_FAILED_FIND_FILE_WITH_MESSAGE_NO_FXNNAME

#ifndef ERROR_FORMAT_FAILED_FIND_FILE_NO_MESSAGE_WITH_FXNNAME
#define ERROR_FORMAT_FAILED_FIND_FILE_NO_MESSAGE_WITH_FXNNAME \
    "%s: ERROR (FileNotFoundException):\n\tFile '%s' not found.\n"
#endif //ERROR_FORMAT_FAILED_FIND_FILE_NO_MESSAGE_WITH_FXNNAME

#ifndef ERROR_FORMAT_FAILED_FIND_FILE
#define ERROR_FORMAT_FAILED_FIND_FILE \
    "%s: ERROR (FileNotFoundException):\n\tFile '%s' not found.\n\t%s"
#endif //ERROR_FORMAT_FAILED_FIND_FILE

#ifndef ERROR_FORMAT_FAILED_FIND_DIR_NO_MESSAGE
#define ERROR_FORMAT_FAILED_FIND_DIR_NO_MESSAGE_NO_FXNNAME \
  "ERROR (DirectoryNotFoundException):\n\tFolder '%s' not found.\n"
#endif //ERROR_FORMAT_FAILED_FIND_DIR_NO_MESSAGE

#ifndef ERROR_FORMAT_FAILED_FIND_DIR_WITH_MESSAGE_NO_FXNNAME
#define ERROR_FORMAT_FAILED_FIND_DIR_WITH_MESSAGE_NO_FXNNAME \
    "ERROR (DirectoryNotFoundException):\n\tFolder '%s' not found.\n\t%s"
#endif //ERROR_FORMAT_FAILED_FIND_DIR_WITH_MESSAGE_NO_FXNNAME

#ifndef ERROR_FORMAT_FAILED_FIND_DIR_WITH_FXNNAME_NO_MESSAGE
#define ERROR_FORMAT_FAILED_FIND_DIR_WITH_FXNNAME_NO_MESSAGE \
  "%s: ERROR (DirectoryNotFoundException):\n\tFolder '%s' not found."
#endif //ERROR_FORMAT_FAILED_FIND_DIR_WITH_FXNNAME_NO_MESSAGE

#ifndef ERROR_FORMAT_FAILED_FIND_DIR
#define ERROR_FORMAT_FAILED_FIND_DIR \
  "%s: ERROR (DirectoryNotFoundException):\n\tFolder '%s' not found.\n\t%s"
#endif //ERROR_FORMAT_FAILED_FIND_DIR

#endif //__EXCEPTIONS_CORE_SYMBOLS_H__
