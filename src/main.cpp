/** @file */ 

// Lib
#define DOCTEST_CONFIG_IMPLEMENT
#include <doctest.h>

/**
 * TEST COMMENT
 */
int main(int argc, char** argv)
{
	// Default behaviour is to run unit test on application start.
	// When built in release mode test code is abstracted away and not included in the binary.
	// Its possible to query what tests to run or disable tests with flags.
	doctest::Context context;

	context.applyCommandLine(argc, argv);
	context.run();

	// Insert application logic here

	return 0;
}
