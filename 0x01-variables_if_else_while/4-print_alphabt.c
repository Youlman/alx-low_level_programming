#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print the alphabet in lower case
 * Return: Always 0
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q' || ch == 'e')
		{
			continue;
		}
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
