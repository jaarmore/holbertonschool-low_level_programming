#include "search_algos.h"
/**
 * binary_search - search a value in an array of integer using linear search.
 * @array: array of integers
 * @size: size of the array
 * @value: value to search in the array.
 * Return: the index of array if found, -1 othewise
 **/
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t mid, index;
	char *comma = "";

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		printf("Searching in array: ");
		for (index = low; index <= high; index++)
		{
			printf("%s%d", comma, array[index]);
			comma = ", ";
		}
		printf("\n");

		mid = (int)(low + high) / 2;
		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
		comma = "";
	}
	return (-1);
}
