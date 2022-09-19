#include "main.h" 
/**
 * print_rev - Print a string in reverse
 * @str: the string
 */

void print_rev(char *str)
{
	int len = 0, i, value;
	
	while (*str != '\n')
	{
		len++;
		str++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		value = *(str + i);
		_putchar(value);
	}
	_putchar('\n');
}
