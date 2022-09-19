#include "main.h"

/**
 * puts_half - Print the second half of string.
 * @str: The string
 */
void puts_half(char *str)
{
	int n, index = 0, len = 0;

	while (str[index++])
		len++;
	if ((len % 2) == 0)
		n = len / 2;
	else
		n = (len + 1) / 2;
	for (index = n; index < len; index++)
		_putchar(str[index]);
	_putchar('\n');
}
