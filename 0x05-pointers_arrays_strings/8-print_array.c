#include <stdio.h>
#include "main.h"

/**
 * print_array - Print the second half of string.
 * @str: an array of integers
 * @a: The number of elements of the array
 */
void print_array(int *str, int a)
{
	int n, index = 0, len = 0;

	while (str[index++])
		len++;
	if (a > 0)
	{
		if (a > len)
			n = len;
		else
			n = a;
		for (index = 0; index < n; index++)
		{
			printf("%d", str[index]);
			if (index == n - 1)
				continue;
			printf(", ");
		}
		printf("\n");
	}
	else
		printf("\n");

}
