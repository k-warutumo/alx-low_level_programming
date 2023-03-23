#include <stdio.h>
#include <stdarg.h>

/**
 *sum_them_all - sunction that sums all elements
 *@n: number of elements in array
 *
 *
 *Return: 0 if n==0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;


	if (n == 0)
	{
		return(0);
	}

	/* Initialize the argument list and loop through the parameters */
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
	sum += va_arg(args, int);
	}

	/* Clean up the argument list */
	va_end(args);

	return (sum);
}
