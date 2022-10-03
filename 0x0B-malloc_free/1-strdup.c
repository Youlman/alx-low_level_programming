#include "main.h"
#include <stdlib.h>

/**
* _strdup - a pointer to a newly allocated space in memory.
* @str: a pointer to  a string
* Return: a pointer to duplicate string or  NULL
*/
char *_strdup(char *str)
{
	char *s;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	s = malloc((len + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < len)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
