#include "main.h"
/**
 * swap_int- swap the values of two integers
 * @a: the address of the first number
 * @b: the adrress of the second number
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	
	*a = *b;
	*b = temp;

}
