#include "main.h"

/**
 * _memset - Fill memory with a constant byte
 * @s: A pointer s.
 * @b: The address of memory to print
 * @n: bytes of the memory
 *
 * Return: A pointer to memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
