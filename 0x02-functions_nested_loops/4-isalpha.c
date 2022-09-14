#include "main.h"

/**
* _isalpha - if a character is alphabetic character
* @c: The character to check
* Return: 1 or 0
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
