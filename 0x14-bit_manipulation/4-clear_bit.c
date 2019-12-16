#include "holberton.h"
/**
 * clear_bit - function that sets 0 the value of a bit.
 * @n: number to set 0.
 * @index: index given to set 0 the number.
 * Return: the new number.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	int move;

	move = 1 << index;

	if (n == NULL || index > 63)
		return (-1);

	*n = *n & ~move;
	return (1);
}
