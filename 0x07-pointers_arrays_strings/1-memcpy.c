#include"main.h"

/**
 * _memcpy - copies memory area
 * @s: string
 * @n: given number of bytes
 * @b: character
 * @i: number of characters
 * @dest: destination
 * Return: returns pointer to dest
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (0);
}
