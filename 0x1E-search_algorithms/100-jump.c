#include "search_algos.h"
#include <math.h>
/**
* jump_search - searches for a value in an array of integers using
* the jump search algorithm
*
* @array: a pointer to an array
* @size : the length of the array
* @value: the value to search in the array
*
* Return: -1 if array is NULL or value is not present
* or the first index where value is located
*/
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, jump = 0, step = sqrt(size);

	if ((array == NULL) || (size == 0))
		return (-1);

	while (jump < size && array[jump] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

	jump = jump < size - 1 ? jump : size - 1;
	while (i < jump && array[i] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i++;
	}

	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
