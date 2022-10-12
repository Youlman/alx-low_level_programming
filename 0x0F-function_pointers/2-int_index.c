#include <stdio.h>
#include "function_pointers.h"

/**
* int_index - Function that searches for an integer
* @array: a pointer to an array
* @size: The length of the arry
* @cmp: a pointer to a function
*
* Return: index or -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
