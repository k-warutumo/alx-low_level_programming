#include"main.h"

/**
 * _memcpy - copies memory area
 * @n: given number of bytes
 * @dest: memory area
 * @src: source
 * Return: returns pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
