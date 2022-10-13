#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - Print numbers separates by a separator
 * @separator: The separator
 * @n: the number of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));

		if (separator == NULL || i == n - 1)
			continue;
		printf("%s", separator);
	}
	va_end(ap);

	printf("\n");
}
