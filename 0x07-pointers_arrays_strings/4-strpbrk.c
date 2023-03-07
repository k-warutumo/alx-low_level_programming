#include"main.h"

/**
 * _strpbrk -searches a string for any of a set of bytes
 *@s: string to search
 *@accept: string to measure
 *Return: Returns a pointer to the byte in s that matches
 *one of the bytes in accept, or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				bytes++;
				break;
			}

			else if (accept[i + 1] == '\0')
				return (bytes);
		}

		s++;
	}

	return (bytes);
}
