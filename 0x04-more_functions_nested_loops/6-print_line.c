#include "main.h"
#include <stdio.h>

/**
 * print_line - print a line on the terminal
 *@n: the number of times '_' will be printed
 * Return: void
 *
 */
void print_line(int n)
{
		int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
