#include "holberton.h"
/**
 * flip_bits - function that return the number of bit to flip.
 * @n: first value to flip.
 * @m: second value to convert.
 * Return: the number of bits to flip and convert n on m.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num;
	int cont = 0;

	num = (n ^ m);

	while (num)
	{
		cont += (num & 1);
		num >>= 1;
	}
	return (cont);
}
