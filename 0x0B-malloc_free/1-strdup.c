#include"main.h"
#include<stdlib.h>
#include<stdio.h>
#include <string.h>

/**
 *_strdup - funtion that duplicates string
 *@str: string to duplictae
 *
 *Return: NULL if str is NULL
 */
char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}

	size_t len = strlen(str) + 1;
	char *new_str = malloc(len);

	if (new_str == NULL)
	{
		return (NULL);
	}

	strcpy(new_str, str);

	return (new_str);
}
