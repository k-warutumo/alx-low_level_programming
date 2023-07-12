#include <stdio.h>
#include <stdlib.h>

/**
 *main - function that prints 2 numbers
 *@argc: number of commands
 *@argv: array containg commands
 *Return: 0 if successs, 1 if fails
 */
int main(int argc, char *argv[])
{
/* Check if the program received two arguments.*/
	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}

	int product = (atoi(argv[1]) * atoi(argv[2]));
	/* Print the result of the multiplication.*/
	printf("%d\n", product);

	return (0);
}
