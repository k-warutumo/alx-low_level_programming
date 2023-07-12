#include"main.h"
#include<stdlib.h>
/**
 * _strdup - returns pointer to a newly allocated space in memory thatcontains
 * a copy of the string given as a parameter.
 * @str: string to be duplicated
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	char *strdupt;
	unsigned int i, y;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;
	strout = (char *)malloc(sizeof(char) * (i + 1));

	if (strout == NULL)
		return (NULL);

	for (y = 0; y <= i; y++)
		strout[y] = str[y];

	return (strdup);
}
