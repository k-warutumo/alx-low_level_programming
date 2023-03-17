#include "main.h"
#include <stdio.h>

/**
 * swap_int  - function to swat integers
 * @a: - first interger
 * @b: - second interger
 *
 */
void swap_int(int *a, int *b)
{
	int d;

	d = *a;
	*a = *b;
	*b = d;
}
