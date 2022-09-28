#include "main.h"

/**
* _strlen_recursion - Print the length of string.
* @s: The string .
* Return: the length of the string
*/
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}
