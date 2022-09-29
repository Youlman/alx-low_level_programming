#include "main.h"

/**
* _strlen_recursion - Print the length of string.
* @s: The string .
* Return: the length of the string
*/

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}

/**
* _palindrome - check if a string is a palindrome
* @s: the string
* @length:the length of s.
* @index: The index of the index
* Return: 1 or 0
*/

int _palindrome(char *s, int length, int index)
{
	if (s[index] == s[length / 2])
		return (1);
	if (s[index] == s[length - index - 1])
		return (_palindrome(s, length, index + 1));
	return (0);
}

/**
* is_palindrome - if a string is a palindrome
* @s: the string
* Return: 1 or 0
*/
int is_palindrome(char *s)
{
	int index = 0;
	int length = _strlen_recursion(s);

	if (!(*s))
		return (1);

	return (_palindrome(s, length, index));
}
