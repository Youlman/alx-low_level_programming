#include "main.h"
#include <stdlib.h>

/**
* array_range - creates an array .
* @min: The minimun of value
* @max: The maximum value
* Return: The pointer to a newly created array or  NULL
*/
int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	size = max - min + 1;
	if (min > max)
		return (NULL);

	arr = malloc(size * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = min++;
	}

	return (arr);
}
