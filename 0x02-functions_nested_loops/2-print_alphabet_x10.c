#include "main.h"
/**
 * print_alphabet_x10 - print ten times the alphabet
 */

void print_alphabet_x10(void)
{
	int count = 0;
	char letter;

	while (count++ <= 9)
	{
		for (letter = 'a'; letter <= 'a'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
