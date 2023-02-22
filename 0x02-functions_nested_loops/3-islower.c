#include "main.h"
/**
 * _islower - check if c is lower case
 * @c: is the char to check
 * Return: 1 if c is lower case, otherwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

