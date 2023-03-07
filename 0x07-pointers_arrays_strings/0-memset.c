#include"main.h"
#include<stdio.h>

/**
 *_memset - fills memory with a constant byte
 *@b: - character
 *@s: -	string
 *@n: - number of bytes
 *return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	*(s + i) = b;
	}

	return (s);
}
