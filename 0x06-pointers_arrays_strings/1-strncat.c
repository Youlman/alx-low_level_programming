#include "main.h"

/**
 * _strncat - Concatenates two strings 
 * @dest: A pointer to the string .
 * @src: the string to be appended to @dest.
 *
 * Return: A pointer to the destination string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_length = 0;

	while (dest[index++])
		dest_length++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_length++] = src[index];

	return (dest);
}
