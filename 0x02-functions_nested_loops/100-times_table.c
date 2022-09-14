#include "main.h"

/**
* print_times_table - Print the n times table starting with 0;
* @n: number of tables
*/
void print_times_table(int n)
{
	int i, j, product;

	if (n >= 0 && n <= 15)
	{
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
				if (product < 100)
					_putchar(' ');
				if (product >= 100)
				{
					_putchar((product / 100) + '0');
					_putchar(((product / 10) % 10) + '0');
				}
				else if (product < 100 && product >= 10)
					_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
