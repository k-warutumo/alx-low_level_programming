#include"main.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 *@str: string
 *@new_str: new string
 *Return: pointer ro duplicated string
 */
char *_strdup(char *str)
{
	char *duplicate;
	int index, len = 0;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;

	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		duplicate[index] = str[index];

	duplicate[len] = '\0';

	return (duplicate);
}
