#include "main.h"

/**
 * cap_string - Capitalize all words of a string.
 * @s: the string to change
 *
 * Return: a string with words capitalize
 */

char *cap_string(char *s)
{
	int index = 0;

	while (s[index])
	{
		while (!(s[index] >= 'a' && s[index] <= 'z'))
			index++;
		if (index == 0 ||
			s[index - 1] == ' ' ||
			s[index - 1] == '\t' ||
			s[index - 1] == '\n' ||
			s[index - 1] == ',' ||
			s[index - 1] == ';' ||
			s[index - 1] == '.' ||
			s[index - 1] == '!' ||
			s[index - 1] == '?' ||
			s[index - 1] == '"' ||
			s[index - 1] == '(' ||
			s[index - 1] == ')' ||
			s[index - 1] == '{' ||
			s[index - 1] == '}')
		{
			s[index] -= 32;
		}
		index++;
	}

	return (s);
}
