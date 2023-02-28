#include"main.h"
/**
 * puts2 - prints every other character of a string
 * @str: the string
 */
void puts2(char *str)
{
	if (str == NULL)
	{
	return;
	}

	int len = strlen(str);

	for (int i = 0; i < len; i += 2)
	{
	putchar(str[i]);
	}

	putchar('\n');
}
