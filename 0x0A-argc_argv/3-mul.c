#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main: function that prints 2 numbers
 *@argc: number of commands
 *@argv: array containg commands
 *Return: 0
 */
int main(int argc, char *argv[])
{
/* Check if the program received two arguments.*/
	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}

	int first_number = atoi(argv[1]);
	int second_number = atoi(argv[2]);

	int product = first_number * second_number;

	/* Print the result of the multiplication.*/
	printf("%d\n", product);

	return (0);
}
