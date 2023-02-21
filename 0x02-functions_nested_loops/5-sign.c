#include "main.h"
/**
 * print_sign - print te sign of number
 *@n: the number to be checked
 * Return: 1 if number is + 0 if number is zero -1 if negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(+);
			return (1);
	}
	else if(n < 0)
	{
		_putchar(-);
			return (-1);
	}
	else
	{
		_putchar(0);
			return (0);
	}
}
