#include "main.h"

/**
* _abs - The absolute value of an integer
* @n: The number
* Return: number
*/
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (0);
	}
}
