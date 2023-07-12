#include"main.h"
#include<stdlib.h>
#include<string.h>

/**
 *str_concat - function that concatenates 2 strings
 *@s1: one string
 *@s2: second strings
 *
 *Return: NULL if str is empty, RESULT if successful
 */

char *str_concat(char *s1, char *s2)
{
	/* Treat NULL strings as empty strings*/
	if (s1 == NULL)
	{
	s1 = "";
	}
	if (s2 == NULL)
	{
	s2 = "";
	}

	size_t s1_length = strlen(s1);
	size_t s2_length = strlen(s2);

	char *result = (char *)malloc((s1_length + s2_length + 1) * sizeof(char));

	if (result == NULL)
	{
	return (NULL); /* Return NULL if memory allocation fails*/
	}

	strcpy(result, s1);
	strcat(result, s2);

	return (result);
}

