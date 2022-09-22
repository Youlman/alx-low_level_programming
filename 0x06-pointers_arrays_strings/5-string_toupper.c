#include "main.h"

/**
 * string_toupper - Change all lowercase of a string to uppercase.
 * @s: the string to change
 *
 * Return: a string into uppercase
 */

char *string_toupper(char *s)
{
	int index = 0;

	while (s[index])
	{
		if (s[index] >= 'a' && s[index] <= 'z')
			s[index] -= 32;
		index++;
	}

	return (s);
}
