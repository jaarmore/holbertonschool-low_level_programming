#include "search_algos.h"
/**
 * linear_search - search a value in an array of integer using linear search.
 * @array: array of integers
 * @size: size of the array
 * @value: value to search in the array.
 * Return: the index of array if found, -1 othewise
 **/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
