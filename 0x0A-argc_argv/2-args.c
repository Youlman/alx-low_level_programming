#include <stdio.h>
#include <stdlib.h>

/**
* main - Print all the arguments
* @argc: the number of arguments
* @argv: an array of argments
* Return: Always 0.
*/

int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
