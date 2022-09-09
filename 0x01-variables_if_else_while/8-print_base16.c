#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print all single digit in base 10 using only putchar in reverse
 * Return: Always 0
 */
int main(void)
{
	int i;
	char letter;

	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
