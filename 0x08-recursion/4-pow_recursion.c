#include "main.h"

/**
* _pow_recursion - calculate the @x power of @y.
* @x: the number to be raised
* @y: the number
* Return: the number @x raised to y
*/
int _pow_recursion(int x, int y)
{
	int pow = x;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	pow *= _pow_recursion(x, y - 1);
	return (pow);
}
