#include "main.h"
/**
 * print_last_digit-print last digit
 *@n: the int to get last digits from
 *Return: value of last 3 digits
 */

int print_last_digit(int n)
{
	int a;

	if (n < 0)
	n = -n;

	a = n % 10;
	if a < 0
	a = -a;

	_putchar(a + '0');
	return (a);
}
