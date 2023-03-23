#include <stdarg.h>
#include <stdio.h>

/**
 *print_numbers - functio to print numbers
 *@n: number of elements
 *@seperator: seperates elements
 *
 *Return: print
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	/* Initialize the argument list */
	va_start(args, n);

	/* Loop through the parameters and print each one */
	for (i = 0; i < n; i++)
	{
	printf("%d", va_arg(args, int));

	/* Print the separator if it's not NULL and not the last number */
	if (separator != NULL && i != n - 1)
	{
		printf("%s", separator);
	}
	}

	/* Clean up the argument list */
	va_end(args);

	/* Print a newline character */
	printf("\n");
}
