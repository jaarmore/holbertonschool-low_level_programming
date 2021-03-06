#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - function that allocate memory for an array and set values to 0
 * @nmemb: number of elements of array
 * @size: size of the data type of array
 * Return: A pointer to newly allocate memory.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;

	return (ptr);
}
