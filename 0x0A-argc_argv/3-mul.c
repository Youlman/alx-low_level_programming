#include <stdio.h>
#include <stdlib.h>

/**
* main - Print mutiplication of two arguments
* @argc: the number of arguments
* @argv: an array of argments
* Return: Always 0.
*/

int main(int argc, char *argv[])
{
	int number1, number2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	number1 = atoi(argv[1]);
	number2 = atoi(argv[2]);
	result = number1 * number2;
	printf("%d\n", result);


	return (0);
}
