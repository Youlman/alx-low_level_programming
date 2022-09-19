#include "main.h"

/**
 * rev_string - Reverses a string.
 * @str: The string to be reversed.
 */
void rev_string(char *str)
{
	int len = 0, i = 0;
	char tmp;

	while (str[i++])
		len++;

	for (i = len - 1; i >= len / 2; i--)
	{
		tmp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = tmp;
	}
}
