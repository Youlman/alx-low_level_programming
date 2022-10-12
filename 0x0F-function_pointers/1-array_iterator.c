#include <stdio.h>
#include "function_pointers.h"

/**
*  array_iterator - Function given as parameter on each element of an arry
*  @array: a pointer to an array
*  @size: The length of the arry
*  @action: a pointer to a function
*
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array == NULL || size == 0 || action == NULL)
		return;
	
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
