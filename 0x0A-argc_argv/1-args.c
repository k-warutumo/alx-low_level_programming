#include <stdio.h>
#include "main.h"
/**
 *main - function that prints number of arguments passed to it
 *@argc: number of commands
 *@argv: array that contains arguments
 *Return: returns count
 *
 */

int main(int argc, char *argv[])
{

	printf("%d\n", argc - 1);
	return (0);
}
