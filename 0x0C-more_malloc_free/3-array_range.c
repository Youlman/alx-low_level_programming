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
	int i;

	if (min > max)
		return (NULL);

	arr = malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (max - min + 1); i++)
	{
		arr[i] = min;
		min++;
	}

	return (arr);
}
