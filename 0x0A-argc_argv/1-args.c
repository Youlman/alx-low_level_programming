#include <stdio.h>
#include <stdlib.h>

/**
* main - Print the number arguments
* @argc: the number of arguments
* @argv: an array of argments
* Return: Always 0.
*/

int main(int argc, char __attribute__((__unused__)) **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
