#include <stdio.h>
#include "main.h"

/**
* print_diagonal - Print a diagonal
* @n: integer
*/

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			if (j == n - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
