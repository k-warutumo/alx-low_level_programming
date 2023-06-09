#include <stdio.h>
#include "main"

/**
 *main -prints number of arguments
 *@argc: number of arguments
 *@argv: array of pointers
 *Returns: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; 1++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
