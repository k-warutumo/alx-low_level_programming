#include "function_pointers.h"
#include<stdio.h>

/**
 *print_name - Prints a name using a provided function pointer
 *@name: name to be printed
 *@f: A function pointer to a function that takes a char pointer as a parameter
 * and returns void
 *
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
