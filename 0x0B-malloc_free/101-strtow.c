#include "main.h"
#include <stdlib.h>

/**
* argstostr  - concatenate arguments.
* @ac: number f arguments
* @av: a pointer to array of strings
* Return: a pointer to the concatenated string or  NULL
*/
char *argstostr(int ac, char **av)
{
	char *s;
	int i, j, len = ac, index = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}

	s = malloc((len + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			s[index++] = av[i][j];
		}
		s[index++] = '\n';
	}

	s[len] = '\0';

	return (s);
}
