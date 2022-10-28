#include "main.h"

/**
 * set_bit - set the value of a bit at a given index.
 * @n: The bit.
 * @index: The index to get the value.
 *
 * Return: -1 or 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (index >> 1);

	return (1);
}
