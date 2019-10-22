#include "dog.h"
#include <stdio.h>
/**
 * free_dog - function that frees dogs.
 * @d: pointer to struct dog.
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
