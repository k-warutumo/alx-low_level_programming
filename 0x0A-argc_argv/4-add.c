#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - program that adds positive numbers
 *@argc: no of commnsd line arguments
 *@argv: array of
 *Return: error or sum
 */

int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc == 1)
	{
	printf("0\n");

	return (0);
	}

	for (int i = 1; i < argc; i++)
	{
	char *number = argv[i];

	for (int j = 0; number[j] != '\0'; j++)
	{
		if (!isdigit(number[j]))
		{
		printf("Error\n");
		return (1);
		}
	}
	sum += atoi(number);
	}

	printf("%d\n", sum);
	return (0);
}
