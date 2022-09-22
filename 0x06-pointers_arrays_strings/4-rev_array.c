#include "main.h"
/**
 * reverse_array - Reverse the content of an array of integers
 * @a: the array of integers
 * @n: The number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int i, tempo;

	for (i = 0; i < n / 2; i++)
	{
		tempo = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tempo;
	}
}
