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
	int number = argc - 1;

	/*prints no. of arguments*/
	printf("%d\n", number);

	return (0);
}
