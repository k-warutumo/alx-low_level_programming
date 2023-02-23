#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isupper - check the code.
 *@c: - the alphabet to check
 * Return: Return 1 if alphabet is Uppercase, 0if alphabet is Lowercase.
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	else
	{
		return (0);
	}

}
