#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - apointer to a 2 dimensional array of integers.
* @width: number of columns.
* @height: number of rows
* Return: a pointer to an array or  NULL
*/
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width == 0 || height == 0)
		return (NULL);

	arr = malloc(height * sizeof(int));
	for (i = 0; i < height; i++)
		arr[i] = malloc(width * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}

	return (arr);
}
