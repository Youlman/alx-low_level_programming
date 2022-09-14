#include "main.h"

/**
 *  print_alphabet- print the alpahbet in lowercase 10 times
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet_x10(void)
{
	int i;
	char letter;

	for (i = 0; i < 10 ; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
