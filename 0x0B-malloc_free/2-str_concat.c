#include<stdio>
#include"main.h"

/**
 *str_concat - concatenates two strings
 *@s1: string one
 *@s2: string two
 *
 *Returns: - returns NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size_t s1_len = strlen(s1);
	size_t s2_len = strlen(s2);
	char *result = malloc(s1_len + s_len + 1); /*  +1 for null terminator*/

	if (result == NULL)
	{
	return (NULL); /* malloc failed */
	}

	memcpy(result, s1, s1_len);
	memcpy(result + s1_len, s2, s2_len + 1); /* +1 to copy null terminator */

	return (result);
}
