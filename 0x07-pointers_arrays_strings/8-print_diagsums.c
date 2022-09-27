#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Print the sums of the two diagonales of a matrix.
 * @a: a two dimensional array.
 * @size: the dimension of the matrix
 */

void print_diagsums(int *a, int size)
{
	int i;
	int first_diag = 0, second_diag;

	for (i = 0; i < size; i++)
	{
		first_diag += a[i];
		a += size;
	}
	a -= size;
	for (i = 0; i < size; i++)
	{
		second_diag += a[i];
		a -= size;
	}
	printf("%d, %d\n", first_diag, second_diag);

}
