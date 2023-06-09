#include"main.h"
#include<stdlib.h>
#include<stdio.h>

/**
 *main - prints
 *@argc: no .o argument
 *@argv: array of pointer
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int num_argument = argc - 1;

	/*prints no. of arguments*/
	printf("%d\n", num_argument);

	return (0);
}
