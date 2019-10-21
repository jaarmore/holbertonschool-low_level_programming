#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
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

	/**
	 *if (name == NULL)
	 *	return (NULL);
	 *
	 *if (owner == NULL)
	 *	return (NULL);
	 *
	*/
	ndog = malloc(sizeof(dog_t));

	if (ndog == NULL)
	{
		return (NULL);
	}
	ndog->name = name;
	ndog->age = age;
	ndog->owner = owner;

	return (ndog);
}
