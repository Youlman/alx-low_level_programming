#include "main.h"
/**
 * _strchr - locates a character @c in string @s.
 * @s: A pointer to string.
 * @c: the character to locate in string @s.
 *
 * Return: A pointer to the first occurence of the character c or NULL.
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
