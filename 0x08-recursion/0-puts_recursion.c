#include "main.h"

/**
 * _puts_recursion - write a string followed by a new line.
 * @s: a pointer to a string.
 */

void _puts_recursion(char *s)
{
	int i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
