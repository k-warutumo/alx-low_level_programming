#include"main.h"

/**
 * _strchr - locates a character in a string
 *@c: character being located
 *@s: string to locate c in
 * Return: returns pointer to occurence of n
 */
char *_strchr(char *s, char c)
{
	int i;

		for (i = 0; s[i] >= '\0'; i++)
		{
			if (s[i] == c)
			return (s + i);
		}

	return ('\0');

}
