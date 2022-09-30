#include <stdio.h>
#include <stdlib.h>

/**
* main - Print the program name
*
* Return: Always 0.
*/
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n",*argv++);
	return (0);
}
