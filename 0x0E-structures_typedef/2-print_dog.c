#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - prrint struct dog
 * @d: void to struct
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
	}
}
