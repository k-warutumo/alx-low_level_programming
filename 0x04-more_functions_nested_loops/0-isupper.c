#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * isupper - check the code.
 *@c - the alphabet beicg checked
 * Return: Return 1 if alphabet is Uppercase, 0if alphabet is Lowercase.
 */
int main(void)
{
	char c;

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	else
	{
		return (0);
	}

}
