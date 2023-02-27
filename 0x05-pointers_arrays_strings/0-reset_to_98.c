#include "main.h"
#include <stdio.h>

/**
 * resets_to_98  - points it to 98
 * @n : the int value
 * Return: Always 0.
 */
void reset_to_98(int *n);
{
	int n = 98;

	int main(void)

	{

	int x = 0;

	printf("Before: x = %d\n", x);
	reset_to_98(&x);
	printf("After: x = %d\n", x);
	return (0);
	}
