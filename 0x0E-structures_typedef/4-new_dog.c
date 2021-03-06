#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - function that creates a new dog.
 * @name: name of the new dog.
 * @age: age of the new dog.
 * @owner: new owner of the dog.
 * Return: pointer to point a new struct dog.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	int nlen, olen;

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);
	if (name == NULL)
		return (NULL);
	for (nlen = 0; name[nlen] != '\0'; nlen++)
		;
	if (owner == NULL)
		return (NULL);
	for (olen = 0; owner[olen] != '\0'; olen++)
		;

	nlen++, olen++;
	ndog->name = malloc(sizeof(char) * nlen);
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}

	for (nlen = 0; name[nlen] != '\0'; nlen++)
		ndog->name[nlen] = name[nlen];
	ndog->name[nlen] = '\0';

	ndog->owner = malloc(sizeof(char) * olen);
	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}
	for (olen = 0; owner[olen] != '\0'; olen++)
		ndog->owner[olen] = owner[olen];
	ndog->owner[olen] = '\0';
	ndog->age = age;
	return (ndog);
}
