#include"main.h"

/**
 *_strcat - concatenates two strings
 * @dest: one of the  strings
 * @src: another string
 * returns - pointer to resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		J++;
	}
	dest[i] = '\0';
	return (dest);
}

