#include "main.h"
/**
 * _strpbrk - search a string for any of a set of bytes.
 * @s: A pointer to string.
 * @accept: the string to be search.
 *
 * Return: a pointer of bytes in @s or NULL.
 */

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				return (s);
			}
		}

		s++;
	}

	return ('\0');
}
