#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - freedog
 * @d: string
 */
void free_dog(dog_t *d)
{
	free(d);
}
