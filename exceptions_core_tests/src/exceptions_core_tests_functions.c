// tests_functions.c - Define the implementations of the functions utilized
// directly by the main application functionality
//

#include "stdafx.h"
#include "exceptions_core_tests.h"

#include "exceptions_core_tests_functions.h"
#include "exceptions_core_tests_symbols.h"

///////////////////////////////////////////////////////////////////////////////
// Testing-domain-language functions

///////////////////////////////////////////////////////////////////////////////
// AndIMustPrint function

void AndIMustPrint(const char* pszMessage) {
  if (IsNullOrWhiteSpace(pszMessage)) {
    ThrowArgumentException(MESSAGE_ARGUMENT_NAME);
  }
  fprintf(stdout, AND_I_MUST_PRINT_OUTPUT_FORMAT, pszMessage);
}

///////////////////////////////////////////////////////////////////////////////
// CalcArea function

int CalcArea(int nSideLength) {
  fprintf(stdout, IN_CALC_AREA);
  if (nSideLength < 0) {
    ThrowArgumentOutOfRangeException(SIDE_LENGTH_ARGUMENT_NAME);
  }

  return nSideLength * nSideLength;
}

///////////////////////////////////////////////////////////////////////////////
// Publicly-exposed functions

///////////////////////////////////////////////////////////////////////////////
// PrintSoftwareTitleAndCopyright function

void PrintSoftwareTitleAndCopyright() {
  fprintf(stdout, SOFTWARE_TITLE);
  fprintf(stdout, SOFTWARE_COPYRIGHT);
}

///////////////////////////////////////////////////////////////////////////////
// TestThrowArgumentException function

void TestThrowArgumentException() {
  fprintf(stdout, IN_TEST_THROW_ARGUMENT_EXCEPTION);

  fprintf(stdout, CALLING_AND_I_MUST_PRINT_WITH_VALID_INPUT);
  AndIMustPrint(HELLO_WORLD);

  fprintf(stdout,
      CALLING_AND_I_MUST_PRINT_WITH_INVALID_INPUT);
  AndIMustPrint(NULL);

  fprintf(stdout,
      "TestThrowArgumentException: The code should never get here.\n");
}

///////////////////////////////////////////////////////////////////////////////
// TestThrowArgumentOutOfRangeException function

void TestThrowArgumentOutOfRangeException() {
  int nSideLength = 5;    // The side of a square

  fprintf(stdout,
      "Testing the ThrowArgumentOutOfRangeException function...\n");

  fprintf(stdout,
      "Calling a function to calculate the area of a square...\n");

  fprintf(stdout, "nSideLength = %d\n", nSideLength);
  int nArea = CalcArea(nSideLength);
  fprintf(stdout, "nArea = %d\n", nArea);

  fprintf(stdout,
      "Now setting square's side length to a negative number...\n");
  nSideLength = -89;  // A negative length does not make any sense

  fprintf(stdout, "nSideLength = %d\n", nSideLength);
  nArea = CalcArea(nSideLength);

  // NOTE: The exception should be thrown by this time, which would make
  // the code below not execute
  fprintf(stdout, "nArea = %d\n", nArea);
}

///////////////////////////////////////////////////////////////////////////////
// TestDirectoryNotFoundException function

void TestThrowDirectoryNotFoundException() {
  fprintf(stdout,
      "Testing the ThrowDirectoryNotFoundException function...\n");

  const char* pszDirectoryPath = "/home/bhart/junk";
  /*
   ThrowDirectoryNotFoundException("TestThrowDirectoryNotFoundException",
   pszDirectoryPath, "Obviously, you are a stupid-head!\n");

   ThrowDirectoryNotFoundException(NULL,
   pszDirectoryPath, "Obviously, you are a stupid-head!\n");

   ThrowDirectoryNotFoundException(NULL,
   pszDirectoryPath, "Obviously, you are a stupid-head!\n");
   */
  ThrowDirectoryNotFoundException(NULL,
      pszDirectoryPath, NULL);

}

///////////////////////////////////////////////////////////////////////////////
// TestFileAccessFailedException function

void TestThrowFileAccessFailedException() {
  fprintf(stdout,
      "Testing the ThrowFileAccessFailedException function...\n");

  const char* pszFilePath = "/home/bhart/junk/spiffy_file.etc";

  //ThrowFileAccessFailedException("TestThrowFileAccessFailedException",
  //pszFilePath, "Obviously, you are a stupid-head!\n");

//  ThrowFileAccessFailedException("TestThrowFileAccessFailedException",
//      pszFilePath, NULL);

//  ThrowFileAccessFailedException(NULL,
//      pszFilePath, "Obviously, you are a stupid-head!\n");

  ThrowFileAccessFailedException(NULL,
      pszFilePath, NULL);
}

///////////////////////////////////////////////////////////////////////////////
// TestFileNotFoundException function

void TestThrowFileNotFoundException() {
  fprintf(stdout,
      "Testing the ThrowFileNotFoundException function...\n");

  const char* pszFilePath = "/home/bhart/junk/spiffy_file.etc";

//  ThrowFileNotFoundException("TestThrowFileNotFoundException",
//      pszFilePath, "Obviously, you are a stupid-head!\n");

//  ThrowFileNotFoundException("TestThrowFileNotFoundException",
//      pszFilePath, NULL);

//  ThrowFileNotFoundException(NULL,
//      pszFilePath, "Obviously, you are a stupid-head!\n");

  ThrowFileNotFoundException(NULL,
      pszFilePath, NULL);
}

///////////////////////////////////////////////////////////////////////////////
// TestGetAndSetFailureExitCode function

void TestGetAndSetFailureExitCode() {
  int nFailureExitCode = GetFailureExitCode();
  if (EXIT_FAILURE == nFailureExitCode) {
    fprintf(stdout, "The return of GetFailureExitCode is EXIT_FAILURE.\n");
  } else {
    fprintf(stdout, "The return of GetFailureExitCode is %d.\n",
        nFailureExitCode);
  }

  fprintf(stdout, "Setting failure exit code to 5...\n");
  nFailureExitCode = 5;
  SetFailureExitCode(nFailureExitCode);
  fprintf(stdout, "Failure exit code set to %d.\n",
      GetFailureExitCode());

  fprintf(stdout, "Restoring the value of the failure exit code...\n");
  fprintf(stdout, "EXIT_FAILURE = %d\n", EXIT_FAILURE);
  nFailureExitCode = EXIT_FAILURE;
  SetFailureExitCode(nFailureExitCode);
  fprintf(stdout, "Failure exit code set to %d.\n",
      GetFailureExitCode());
}

///////////////////////////////////////////////////////////////////////////////
// TestThrowMarshalingException function

void TestThrowMarshalingException() {
  fprintf(stdout,
      "Testing the ThrowMarshalingException function...\n");

  //ThrowMarshalingException("Hello, world!\n");

  ThrowMarshalingException(NULL);
}

///////////////////////////////////////////////////////////////////////////////
// TestThrowNullReferenceException function

void TestThrowNullReferenceException() {
  fprintf(stdout,
      "Testing the ThrowNullReferenceException function...\n");

  ThrowNullReferenceException();
}

///////////////////////////////////////////////////////////////////////////////
// TestThrowOutOfMemoryExceptionWithCustomMessage function

void TestThrowOutOfMemoryExceptionWithCustomMessage() {
  fprintf(stdout,
      "Testing the ThrowOutOfMemoryException function with custom message...\n");
  ThrowOutOfMemoryException(HELLO_WORLD);
}

///////////////////////////////////////////////////////////////////////////////
// TestThrowOutOfMemoryExceptionWithNullMessage function

void TestThrowOutOfMemoryExceptionWithNullMessage() {
  fprintf(stdout,
      "Testing the ThrowOutOfMemoryException function with NULL message...\n");
  ThrowOutOfMemoryException(NULL);
}

///////////////////////////////////////////////////////////////////////////////
// TestThrowUUIDInvalidException function

void TestThrowUUIDInvalidException() {
  fprintf(stdout,
      "Testing the ThrowUUIDInvalidException function...\n");

  ThrowUUIDInvalidException();
}

///////////////////////////////////////////////////////////////////////////////
// TestThrowUUIDNullException function

void TestThrowUUIDNullException() {
  fprintf(stdout,
      "Testing the ThrowUUIDNullException function...\n");

  ThrowUUIDNullException();
}

///////////////////////////////////////////////////////////////////////////////

