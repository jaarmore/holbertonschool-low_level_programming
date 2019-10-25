#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: minimun value on the array.
 * @max: maximun value on the array.
 * Return: pointer to integer.
*/
int *array_range(int min, int max)
{
	int i, *ptr;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; min <= max; i++)
		{
			ptr[i] = min;
			min++;
		}

		return (ptr);
	}
}
