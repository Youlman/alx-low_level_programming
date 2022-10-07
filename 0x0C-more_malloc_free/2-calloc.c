#include "main.h"
#include <stdlib.h>

/**
* _calloc - Allocate memory for an array using malloc.
* @nmemb: The length of array
* @size: The size bytes of an element
* Return: allocated memory or  NULL
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = malloc(nmemb * size);
	if (s == NULL)
	{
		return (NULL);
	}

	return (s);
}
