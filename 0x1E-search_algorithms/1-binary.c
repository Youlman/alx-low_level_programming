#include "search_algos.h"
/**
* binary_search - searches for a value in an array of integers using
* the binary search algorithm
*
* @array: a pointer to an array
* @size : the length of the array
* @value: the value to search in the array
*
* Return: -1 if array is NULL or value is not present
* or the first index where value is located
*/
int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL)
		return (-1);
	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);

}
