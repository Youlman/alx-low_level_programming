#include "main.h"

/**
* is_divisible - if a number is divisible
* @n: the number
* @div: the divisor
* Return: 1 or 0
*/

int is_divisible(int n, int div)
{
	if (n % div == 0)
		return (0);
	if (div == n / 2)
		return (1);
	return (is_divisible(n, div + 1));
}

/**
* is_prime_number - if a number is prime_number
* @n: the number
* Return: 1 or 0
*/
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);

	return (is_divisible(n, div));
}
