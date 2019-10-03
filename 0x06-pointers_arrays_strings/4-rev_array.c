#include "holberton.h"
/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: represents an array of integers.
 * @n: number of elements in array.
*/
void reverse_array(int *a, int n)
{
	int first, last, temp;

	last = n - 1;

	for (first = 0; first < last; first++)
	{
		temp = a[first];
		a[first] = a[last];
		a[last] = temp;
		last--;
	}
}
