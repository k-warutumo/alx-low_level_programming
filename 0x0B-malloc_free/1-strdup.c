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
	if (str == NULL)
	{
		return (NULL);
	}
	size_t len = strlen(str);
	char *new_str = malloc((len + 1) * sizeof(char));

	if (new_str == NULL)
	{
		return (NULL);
	}

	strcpy(new_str, str);
	return (new_str);
}
