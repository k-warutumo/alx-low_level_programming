#include"main.h"
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

/**
 *string_nconcat -  function that concatenates two strings
 *@s1: string 1
 *@s2: string 2
 *@n: no of bytes to be conc from S2
 *Return: returns NULL if it fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int len_s1, len_s2;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

	if (n >= len_s2)
	n = len_s2;/*assign value of s2 to n */

	result = (char *) malloc(len_s1 + n + 1);

	if (result == NULL)/*if malloc fails, return NULL*/
	return (NULL);

	memcpy(result, s1, len_s1);
	memcpy(result + len_s1, s2, n);
	result[len_s1 + n] = '\0';

	return (result);
}
