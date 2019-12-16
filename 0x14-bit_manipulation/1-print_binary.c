#include "holberton.h"
/**
 * print_binary - Function that prints the binary representation of number.
 * @n: number to convert in binary.
*/
void print_binary(unsigned long int n)
{
	unsigned long int temp = n;
	int cont = 0;

	while ((temp >>= 1) > 0)
	{
		cont++;
	}

	while (cont >= 0)
	{
		putchar((n >> cont) & 1 ? '1' : '0');
		cont--;
	}
}
