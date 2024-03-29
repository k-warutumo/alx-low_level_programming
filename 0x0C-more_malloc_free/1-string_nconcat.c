#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: The number of bytes of s2 to concatenate
 *
 * Return: Pointer to the newly allocated concatenated string
 *         NULL if memory allocation fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i, j;
	char *concatenated;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Get the lengths of s1 and s2 */
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	/* Allocate memory for the concatenated string */
	if (n >= len2)
		concatenated = malloc(sizeof(char) * (len1 + len2 + 1));
	else
		concatenated = malloc(sizeof(char) * (len1 + n + 1));

	if (concatenated == NULL)
		return (NULL);

	/* Copy s1 to concatenated */
	for (i = 0; s1[i]; i++)
		concatenated[i] = s1[i];

	/* Concatenate n bytes of s2 or the entire s2 */
	for (j = 0; j < n && s2[j]; j++)
		concatenated[i + j] = s2[j];

	/* Null-terminate the concatenated string */
	concatenated[i + j] = '\0';

	return (concatenated);
}
