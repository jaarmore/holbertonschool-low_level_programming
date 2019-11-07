#include "holberton.h"
/**
 * set_bit - function that sets 0 the value of a bit at index given.
 * @n: the number given.
 * @index: the index given to set the bit.
 * Return: 1 if works or -1 if an error.
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	int move;

	move = 1 << index;

	if (n == NULL || index > 63)
		return (-1);

	*n = *n | move;
	return (1);
}
