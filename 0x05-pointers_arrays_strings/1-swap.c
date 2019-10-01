#include "holberton.h"
/**
 * swap_int - Function that swaps the values of two integers.
 * @a: Address of pointer *a
 * @b: Address of pointer *b
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
