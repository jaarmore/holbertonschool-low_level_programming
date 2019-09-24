#include "holberton.h"
/**
 * print_sign - prints the sign of a number
 * @n: number to be checked
 *
 * Description: print + if n is greater than zero.
 * Print 0 if n is zero.
 * Print -1 if n is less than zero.
 * Return: 1. 0 or -1 depending value of n.
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
