#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - functions that initializes an array.
 * @size: size of the array to initialize.
 * @c: character to load on array.
 * Return: pointer to NULL if fail or pointer otherwise.
*/
char *create_array(unsigned int size, char c)
{
	unsigned int count;
	char *str;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (count = 0; count < size; count++)
		{
			str[count] = c;
		}

		return (str);
	}
}
