#include <stdarg.h>
#include <stdio.h>
/**
 *print_strings - function that prints strings
 *@separator: sepreates strings
 *@n: number of
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	/* Initialize the argument list */
	va_start(args, n);

	/* Loop through the parameters and print each string */
	for (i = 0; i < n; i++)
	{
	str = va_arg(args, char*);

	/* Print "(nil)" if the string is NULL */
	if (str == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s", str);
	}

	/* Print the separator if it's not NULL and not the last string */
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
