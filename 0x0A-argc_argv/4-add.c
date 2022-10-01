#include <stdio.h>
#include <stdlib.h>

/**
* main - Add positive numbers pass in arguments
* @argc: the number of arguments
* @argv: an array of argments
* Return: Always 0.
*/

int main(int argc, char *argv[])
{
	int index1, index2, result;

	for (index1 = 1; index1 < argc; index1++)
	{
		for (index2 = 0; argv[index1][index2]; index2++)
		{
			if (argv[index1][index2] < '0' || argv[index1][index2] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[index1]);
	}
	printf("%d\n", result);

	return (0);
}
