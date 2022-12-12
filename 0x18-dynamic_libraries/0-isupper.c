#include <stdio.h>
#include "main.h"

/**
* _isupper - Check for uppercase character
* @c: character
* Return: 1 or 0
*/

int _isupper(int c)
{
	int value;

	if (c >= 'A' && c <= 'Z')
	{
		value = 1;
	}
	else
	{
		value = 0;
	}
	return (value);
}
