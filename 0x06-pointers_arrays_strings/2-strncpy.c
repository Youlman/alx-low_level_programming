#include "main.h"

/**
 * _strncpy - Copy string
 * @dest: A pointer to the string .
 * @src: the string to be appended to @dest.
 * @n: number character to be appended
 *
 * Return: A pointer to the destination string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_length = 0;

	while (src[index++])
		src_length++;

	for (index = 0; src[index] && index < n; index++)
		dest[src_length++] = src[index];

	for (index = src_length; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
