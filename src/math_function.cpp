
// Our
#include "math_function.hpp"

// Test
#include <doctest.h>

/**
 * \requirement REQ_MATH_001 It shall be possible to add two numbers
 * \requirement REQ_MATH_002 It shall be possible to subtract two numbers
 * \requirement REQ_MATH_003 Zero shall be returned if result is lower then zero
 * \requirement REQ_NOPE_001 Requirement that is implemented but not tested
 * \requirement REQ_NOPE_002 Requirement that is tested but not implemented
 * \requirement REQ_NOPE_003 Requirement that is not tested or implemented
 */

 static int mathFunction(const int a, const int b, const MathOperation op)
 {
	int result = 0;

    /// \satisfies REQ_NOPE_001
	switch(op)
	{
		/// \satisfies REQ_MATH_001
		case MathOperation::Add:
			result  = a + b;
			break;
		/// \satisfies REQ_MATH_002
		case MathOperation::Subtract:
			result = a - b;
			break;
			default:
			result = 0;
	}

	/// \satisfies REQ_MATH_003
	if(result < 0)
	{
		result = 0;
	}
	return result;
 }

 // With doctest we can mix production code and test code <3

/**
 * @brief Test addition, by adding 2 to 3 and expecting 5
 * \verifies REQ_MATH_001
 */
TEST_CASE("TEST_MATH_001") {
    CHECK(mathFunction(2,3,MathOperation::Add) == 5);
}

/**
 * @brief Test subtraction, by subtracting 2 from 3 and expecting 1
 * \verifies REQ_MATH_002
 * \verifies REQ_NOPE_002
 */
TEST_CASE("TEST_MATH_002") {
    CHECK(mathFunction(3,2,MathOperation::Subtract) == 1);
}

/**
 * @brief Test Zero return when mathFunction returns a negative value
 *  \verifies REQ_MATH_003
 */
TEST_CASE("TEST_MATH_003") {
	   CHECK(mathFunction(2,3,MathOperation::Subtract) == 0);
}
