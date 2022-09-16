#include <stdio.h>

/**
* main - Print numbers from 0 to 100 "Fizz" for multiple 3 an "Buzz" 5
*
* Return: Always 0.
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i == 100)
			continue;
		printf(" ");
	}
	printf("\n");

	return (0);
}
