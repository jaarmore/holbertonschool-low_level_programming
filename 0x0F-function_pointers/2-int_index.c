#include "function_pointers.h"
/**
 * int_index - function that search for an integer.
 * @array: array of integers to find.
 * @size: size of the array.
 * @cmp: pointer function to find the number.
 *
 * Return: an integer with index to value finded.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int (*ptr_cmp)(int);
	int i;

	if ((array == NULL) || (cmp == NULL))
		return (-1);

	if (size <= 0)
		return (-1);

	ptr_cmp = cmp;
	i = 0;

	while (i < size)
	{
		if (ptr_cmp(array[i]) != 0)
		{
			return (i);
		}
		i++;
	}

	return (-1);
}
