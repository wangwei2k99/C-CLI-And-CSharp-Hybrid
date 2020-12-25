/* MyFuncClass.h */
#pragma once
namespace MyFuncClassApplication
{
	class MyFuncClass
	{
	public:
		/* return a + b */
		double Add(double a, double b);

		/* return a - b */
		double Subtract(double a, double b);

		/* return a * b */
		double Multiply(double a, double b);

		/* return a / b */
		/* Throws const std::invalid_argument& if b is 0 */
		double Divide(double a, double b);
	};
}