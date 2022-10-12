#include <stdio.h>
#include "function_pointers.h"

/**
*  print_name - Print a name using funtion pointer
*  @name: a pointer to a string
*  @f: a pointer to funtion
*
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	(*f)(name);
}
