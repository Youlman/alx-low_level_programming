#include "main.h"

/**
* _sqrt_ - calculate the square of a number
* @n: the number
* @root: the root
* Return: the number root
*/

int _sqrt(int n, int root)
{
	if ((root * root) == n)
		return (root);

	if (root == n / 2)
		return (-1);

	return (_sqrt(n, root + 1));
}

/**
* _sqrt_recursion - calculate the square root of a number
* @n: the number
* Return: the number square root
*/

int _sqrt_recursion(int n)
{
	int sqrt = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (_sqrt(n, sqrt));
}
