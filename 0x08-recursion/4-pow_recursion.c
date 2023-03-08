#include"main.h"

/**
 *_pow_recursion -finds the value of x raised to the power of y
 *@x: value of the integer
 *@y: the exponent
 *Return: value of x raised to pwer y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
	return (-1);/*check for -ve exponent thatgives error*/
	}
	else if (y == 0)
	{
	return (1);/*base case; n power 0 is 1*/
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));/*recurse to the next number*/
	}
}
