#define _FILE_
#ifndef _FILE_

#include<stdio.h>

/**
 *main - function that prints name of file it was copied from
 *
 *Return: 0
 */
int main(void)
{
	printf("Compiled from file: %s\n", __FILE__);
	return (0);
}
#endif
