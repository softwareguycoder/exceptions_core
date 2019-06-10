// exceptions_core.c - Implementations of the functions etc. exposed by
// exceptions_core.h
//

#include "stdafx.h"
#include "exceptions_core.h"

#include "exceptions_core_symbols.h"

///////////////////////////////////////////////////////////////////////////////
// File-scope globals

int g_nFailureExitCode = EXIT_FAILURE;

///////////////////////////////////////////////////////////////////////////////
// Internal-use-only functions

void Trim(char *out, size_t len, const char *str) {
  if (len == 0)
    return;

  memset(out, 0, len);

  const char *end;

  int leading_space_trimmed = 0;

  end = str + strlen(str) - 1;
  if (!isspace((unsigned char )*str)) {
    *out = *str;
    out++;
  }

  while (*str++ != 0 && str <= end && strlen(out) <= len) {
    if (isspace((unsigned char )*end)) {
      end--;
    }

    if (!leading_space_trimmed && isspace((unsigned char )*str)) {
      continue;
    }

    if (str == end && isspace((unsigned char )*str)
        && isspace((unsigned char )*end)) {
      break;
    }

    leading_space_trimmed = 1;
    *out = *str;
    out++;
  }
}

BOOL IsNullOrWhiteSpace(const char* pszTest) {
  if (pszTest == NULL || strlen(pszTest) == 0) {
    return TRUE;
  }

  char szTrimResult[strlen(pszTest) + 1];
  Trim(szTrimResult, strlen(pszTest) + 1, pszTest);
  if (strlen(szTrimResult) == 0) {
    return TRUE;
  }

  return FALSE;
}

///////////////////////////////////////////////////////////////////////////////
// Publicly-exposed functions

///////////////////////////////////////////////////////////////////////////////
// GetFailureExitCode function

int GetFailureExitCode() {
  return g_nFailureExitCode;
}

///////////////////////////////////////////////////////////////////////////////
// SetFailureExitCode function

void SetFailureExitCode(int nExitCode) {
  g_nFailureExitCode = nExitCode;
}

///////////////////////////////////////////////////////////////////////////////
// ThrowArgumentOutOfRangeException function

void ThrowArgumentOutOfRangeException(const char* pszParamName) {
  if (!IsNullOrWhiteSpace(pszParamName)) {
    fprintf(stderr, ERROR_FORMAT_ARGUMENT_OUT_OF_RANGE_EXCEPTION,
        pszParamName);
  }
  exit(GetFailureExitCode());
}

///////////////////////////////////////////////////////////////////////////////
// ThrowDirectoryNotFoundException function

void ThrowDirectoryNotFoundException(const char* pszCallingFunctionName,
    const char* pszPath, const char* pszMessage) {
  if (IsNullOrWhiteSpace(pszCallingFunctionName)
      && IsNullOrWhiteSpace(pszMessage)) {
    fprintf(stderr, ERROR_FORMAT_FAILED_FIND_DIR_NO_MESSAGE_NO_FXNNAME,
        pszPath);
  } else if (IsNullOrWhiteSpace(pszCallingFunctionName)
      && !IsNullOrWhiteSpace(pszMessage)) {
    fprintf(stderr, ERROR_FORMAT_FAILED_FIND_DIR_WITH_MESSAGE_NO_FXNNAME,
        pszPath, pszMessage);
  } else if (!IsNullOrWhiteSpace(pszCallingFunctionName)
      && IsNullOrWhiteSpace(pszMessage)) {
    fprintf(stderr, ERROR_FORMAT_FAILED_FIND_DIR_WITH_FXNNAME_NO_MESSAGE,
        pszCallingFunctionName, pszPath);
  } else {
    fprintf(stderr, ERROR_FORMAT_FAILED_FIND_DIR,
        pszCallingFunctionName, pszPath, pszMessage);
  }
  exit(GetFailureExitCode());
}

///////////////////////////////////////////////////////////////////////////////
// ThrowFileAccessFailedException function

void ThrowFileAccessFailedException(const char* pszCallingFunctionName,
    const char* pszPath, const char* pszMessage) {
  if (IsNullOrWhiteSpace(pszCallingFunctionName)
      && IsNullOrWhiteSpace(pszMessage)) {
    fprintf(stderr, ERROR_FORMAT_FAILED_ACCESS_FILE_NO_MESSAGE_NO_FXNNAME,
        pszPath);
  } else if (IsNullOrWhiteSpace(pszCallingFunctionName)
      && !IsNullOrWhiteSpace(pszMessage)) {
    fprintf(stderr, ERROR_FORMAT_FAILED_ACCESS_FILE_WITH_MESSAGE_NO_FXNNAME,
        pszPath, pszMessage);
  } else if (!IsNullOrWhiteSpace(pszCallingFunctionName)
      && IsNullOrWhiteSpace(pszMessage)) {
    fprintf(stderr, ERROR_FORMAT_FAILED_ACCESS_FILE_NO_MESSAGE_WITH_FXNNAME,
        pszCallingFunctionName, pszPath);
  } else {
    fprintf(stderr, ERROR_FORMAT_FAILED_ACCESS_FILE,
        pszCallingFunctionName, pszPath, pszMessage);
  }
  exit(GetFailureExitCode());
}

///////////////////////////////////////////////////////////////////////////////
// ThrowFileNotFoundException function

void ThrowFileNotFoundException(const char* pszCallingFunctionName,
    const char* pszPath, const char* pszMessage) {
  if (IsNullOrWhiteSpace(pszCallingFunctionName)
      && IsNullOrWhiteSpace(pszMessage)) {
    fprintf(stderr, ERROR_FORMAT_FAILED_FIND_FILE_NO_MESSAGE_NO_FXNNAME,
        pszPath);
  } else if (IsNullOrWhiteSpace(pszCallingFunctionName)
      && !IsNullOrWhiteSpace(pszMessage)) {
    fprintf(stderr, ERROR_FORMAT_FAILED_FIND_FILE_WITH_MESSAGE_NO_FXNNAME,
        pszPath, pszMessage);
  } else if (!IsNullOrWhiteSpace(pszCallingFunctionName)
      && IsNullOrWhiteSpace(pszMessage)) {
    fprintf(stderr, ERROR_FORMAT_FAILED_FIND_FILE_NO_MESSAGE_WITH_FXNNAME,
        pszCallingFunctionName, pszPath);
  } else {
    fprintf(stderr, ERROR_FORMAT_FAILED_FIND_FILE,
        pszCallingFunctionName, pszPath, pszMessage);
  }
  exit(GetFailureExitCode());
}

///////////////////////////////////////////////////////////////////////////////
// ThrowMarshalingException function

void ThrowMarshalingException(const char* pszMessage) {
  if (IsNullOrWhiteSpace(pszMessage)) {
    return; // Required parameter
  }
  fprintf(stderr, ERROR_FORMAT_MARSHALING_EXCEPTION, pszMessage);
  exit(GetFailureExitCode());
}

///////////////////////////////////////////////////////////////////////////////
// ThrowNullReferenceException function

void ThrowNullReferenceException() {
  fprintf(stderr, ERROR_INVALID_PTR_ARG_EXCEPTION);
  exit(GetFailureExitCode());
}

///////////////////////////////////////////////////////////////////////////////
// ThrowOutOfMemoryException function

void ThrowOutOfMemoryException(const char* pszMessage) {
  if (IsNullOrWhiteSpace(pszMessage)) {
    fprintf(stderr, ERROR_OUT_OF_MEMORY_EXCEPTION_DEFAULT_MESSAGE);
  } else {
    fprintf(stderr, pszMessage);
  }
  exit(GetFailureExitCode());
}

///////////////////////////////////////////////////////////////////////////////
// ThrowUUIDInvalidException function

void ThrowUUIDInvalidException() {
  fprintf(stderr, ERROR_UUID_INVALID_EXCEPTION);
  exit(EXIT_FAILURE);
}

///////////////////////////////////////////////////////////////////////////////
// ThrowUUIDNullException function

void ThrowUUIDNullException() {
  fprintf(stderr, ERROR_UUID_NULL_EXCEPTION);
  exit(ERROR);
}
