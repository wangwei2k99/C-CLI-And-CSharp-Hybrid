/* MyFuncClass.cpp */

#include <stdexcept>
#include "MyFuncClass.h"

using namespace std;

namespace MyFuncClassApplication
{
	double MyFuncClass::Add(double a, double b)
	{
		return a + b;
	}

	double MyFuncClass::Subtract(double a, double b)
	{
		return a - b;
	}

	double MyFuncClass::Multiply(double a, double b)
	{
		return a * b;
	}

	double MyFuncClass::Divide(double a, double b)
	{
		if (b == 0)
		{
			throw invalid_argument("b cannot be zero!");
		}

		return a / b;
	}
}