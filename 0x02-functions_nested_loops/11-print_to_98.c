#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - function that prints all natural numbers from n to 98
 * @n: number given to start
*/
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);

		if (n > 98)
		{
			n--;
		}
		else
		{
			n++;
		}
	}

	if (n == 98)
		printf("%d\n", n);
}
