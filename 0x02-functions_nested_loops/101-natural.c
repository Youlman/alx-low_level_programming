#include <stdio.h>
/**
* main - sum  multiple of 3 an 5
* Return: Always 0.
*/
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}

	printf("%d\n", sum);

	return (0);
}
