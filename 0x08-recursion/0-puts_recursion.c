#include"main.h"

/**
 * _puts_recursion - function that prints a string
 *@s: pointer to the string
 *
 * Return: null
 */

void _puts_recursion(char *s)
{
	if (*s == '\0') /*base case*/
	{
		_putchar('\n'); /* add anew line*/
	return;
	}
	_putchar(*s); /*print the current character*/
	_puts_recursion(s + 1); /*recurse to next character*/
}
