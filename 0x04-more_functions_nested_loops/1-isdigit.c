#include "main.h"
#include <stdio.h>

/**
 *_isdigit - check the if c is a digit
 *@c: the character to check
 * Return: 1 if its a digit. 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= 0, c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
