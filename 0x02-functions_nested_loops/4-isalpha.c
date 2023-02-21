#include "main.h"
/**
 * _isalpha - check whether a char is a letter
 *@c: - is an alphabet to check
 * Return: 1 if c is a letter, otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1)
	else
		return (0)
}
