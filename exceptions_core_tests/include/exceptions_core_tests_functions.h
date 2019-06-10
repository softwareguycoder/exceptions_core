// tests_functions.h - Interface to functions utilized directly by the main
// application code.
//

#ifndef __EXCEPTIONS_CORE_TESTS_FUNCTIONS_H__
#define __EXCEPTIONS_CORE_TESTS_FUNCTIONS_H__

void PrintSoftwareTitleAndCopyright();
void TestThrowArgumentException();
void TestThrowArgumentOutOfRangeException();
void TestThrowDirectoryNotFoundException();
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