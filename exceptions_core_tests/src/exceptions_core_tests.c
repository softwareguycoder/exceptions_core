// tests.c - Implements functions needed to run the tests application
//

#include "stdafx.h"
#include "tests.h"

#include "tests_functions.h"

///////////////////////////////////////////////////////////////////////////////
// main application code

int main(int argc, char* argv[]) {
  clear();

  PrintSoftwareTitleAndCopyright();

  // test the functions that allow users of the exceptions_core library to
  // get and set the exit code that the calling application is forced to
  // return to the operating system when an exception is thrown
  //TestGetAndSetFailureExitCode();

  // Now test the exception functions. Since each exception, when thrown,
  // forces the calling application to abruptly terminate, the idea is that
  // we should comment out all but one of the following calls.
  //TestThrowArgumentOutOfRangeException();

  //TestThrowDirectoryNotFoundException();

  //TestThrowFileAccessFailedException();

  //TestThrowFileNotFoundException();

  //TestThrowMarshalingException();

  //TestThrowNullReferenceException();

  //TestThrowUUIDInvalidException();

  TestThrowUUIDNullException();

  // If you have one of the Test*Exception functions activated, then the
  // code should never reach this point
  return EXIT_SUCCESS;
}
