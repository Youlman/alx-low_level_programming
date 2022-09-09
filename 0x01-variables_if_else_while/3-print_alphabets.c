#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print the alphabet in lower case and uppercase
 * Return: Always 0
 */
int main(void)
{
	int ch;

	/* Print lowercase letters */
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	/* Print uppercase letters */
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
