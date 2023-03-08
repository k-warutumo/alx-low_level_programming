#include"main.h"

/**
 *factorial - calculates the factorial of an integer
 *@n: number to calculate the factorial of
 *
 *Return: the factorial
 */
int factorial(int n);
{
	if (n < 0)/*check for -ve input to retun error*/
	{
		return (-1);
	}
	else if (n == 0)/* base case- fatorial is 1*/
	{
		return (0);
	}
	else
	{
		return  (n * factorial(n - 1));/*recurse to the next number*/
	}
}
