#include"main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 *malloc_checked - funtion that allocates memory
 *@b: integer
 *
 *Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
	perror("malloc_checked failed");
	exit(98);
	}
	return (ptr);
}

