#include "dog.h"
#include <stdlib.h>
#include <stdio.h>


/**
* print_dog - print struct dog
* @d: a pointer to struct dog
*/
void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("nil");
	else
		printf("Name: %s\n", d->name);

	if (d->age == 0)
		printf("nil");
	else
		printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("nil");
	else
		printf("Owner: %s\n", d->owner);
}
