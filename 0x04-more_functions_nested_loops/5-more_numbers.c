#include "holberton.h"
#include <unistd.h>
/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14.
*/
void more_numbers(void)
{
	int i, j, k;

	i = 0;
	j = 48;

	for (k = 1; k <= 10; k++)
	{
		while (i <= 14)
		{
			if (i >= 10 && i <= 14)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
			else
			{
				_putchar(i + j);
			}
			++i;
		}
	}
	write(1, "\n", 4);
}
