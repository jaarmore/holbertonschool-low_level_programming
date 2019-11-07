#include "holberton.h"
/**
 * get_bit - function that returns the value of a bit at given index.
 * @n: is the number given.
 * @index: is the index given.
 * Return: the bit of the position index.
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if ((n >> index) & 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
