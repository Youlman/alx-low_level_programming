#include "main.h"

/**
* factorial - The factorial of a given.
* @n: the number .
* Return: the factorial of the number @n
*/
int factorial(int n)
{
	int fact = n;

	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (1);
	fact *= factorial(n - 1);
	return (fact);
}
