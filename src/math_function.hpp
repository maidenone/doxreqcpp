#pragma once

 /// ENUM Class stuff
enum class MathOperation
{
	Add,
	Subtract
};

/**
 * @brief Do math calculations
 * 
 * @param a 
 * @param b 
 * @param op 
 * @return int 
 */
 static int mathFunction(const int a, const int b, const MathOperation op);