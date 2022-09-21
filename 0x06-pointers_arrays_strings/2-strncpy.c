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
	int index = 0;

	for (index = 0; index < n && src[index] != '\0'; index++)
		dest[index] = src[index];

	for ( ; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
