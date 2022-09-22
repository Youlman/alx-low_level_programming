#include "main.h"

/**
 * leet - Encode a string into 1337.
 * @s: the string to change
 *
 * Return: a string
 */

char *leet(char *s)
{
	int index = 0, i;
	char leet_code[] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (s[index])
	{
		for (i = 0; i <= 7; i++)
		{
			if (s[index] == leet_code[i] ||
				s[index] - 32 == leet_code[i])
				s[index] = i + '0';
		}
		index++;
	}

	return (s);
}
