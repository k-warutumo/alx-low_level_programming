#include<stdio.h>
#include "main.h"
/**
 * main - function that prints number of arguments passed to it
 * @argc: number of command line arguments
 * @argv: array that contains the program command line arguments
 * Return: 0(success)
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
