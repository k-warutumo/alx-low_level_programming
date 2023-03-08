#include"main.h"

/**
 * _strlen_recursion - returns length of string
 * @s: string
 * Return: lenght of string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\n')/*base case. the end of the string*/
	{
		return (0);
	}

	else
	{
		return 1 + _strlen_recursion(s + 1);/*recurse to the nect char*/
	}
}
