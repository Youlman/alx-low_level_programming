#include "main.h"
#include <stdlib.h>

/**
* create_array - Create  an array of chars and initializes.
* @size: unsigned int.
* @c: a character
* Return: a pointer to an array or  NULL
*/
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);

	s = malloc((size) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
