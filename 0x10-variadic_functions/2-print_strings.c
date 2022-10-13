#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - Print strings separates by a separator
 * @separator: The separator
 * @n: the number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator == NULL || i == n - 1)
			continue;
		printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
