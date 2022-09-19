#include "main.h"
/**
 * _strlen - The length of a string
 * @s: the string
 * Return: the length of string
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
