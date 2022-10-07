#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - concatenate two strings.
* @s1: a pointer to  the first string
* @s2: a pointer to the second string
* @n: Number of characters in @s2 to add
* Return: a pointer to the concatenated string or  NULL
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, len = n;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	s = malloc((len + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}

	j = 0;
	for (i = 0; s1[i]; i++)
	{
		s[j++] = s1[i];
	}

	for (i = 0; s2[i] && (i < n); i++)
	{
		s[j] = s2[i];
		j++;
	}

	s[j] = '\0';

	return (s);
}
