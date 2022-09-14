#include "main.h"

/**
* times_table - Print the 9 times table starting with 0;
*/
void times_table(void)
{
	int i, j, product;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		for (j = 1; j < 10; j++)
		{
			_putchar(',');
			_putchar(' ');
			product = i * j;
			if (product < 10)
				_putchar(' ');
			else
				_putchar((product / 10) + '0');
			_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}
