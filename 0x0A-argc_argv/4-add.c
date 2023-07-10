#include <stdio.h>
#include <stdlib.h>

/**
 *main - adds positive numbers
 *@argc: number of  arguments
 *@argv: array conatining arguments
 *Return: 0
 */

int main(int argc, char *argv[])
{
/* Initialize the sum of the numbers.*/
	int sum = 0;

/* Iterate over the command-line arguments.*/
	for (int i = 1; i < argc; i++)
	{
	/* Check if the argument is a positive number.*/

	int number = atoi(argv[i]);

	if (number < 1)
	{
	printf("Error\n");
	return (1);
	}

	/* Add the number to the sum.*/
	sum += number;
	}

/* Print the sum of the numbers.*/
	printf("%d\n", sum);
	return (0);

}
