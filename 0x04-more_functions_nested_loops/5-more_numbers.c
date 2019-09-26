#include "holberton.h"
#include <unistd.h>
/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14.
*/
void more_numbers(void)
{
	int i, k;

	for (k = 1; k <= 10; k++)
	{
		i = 0;

		while (i <= 14)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
			++i;
		}
	}
	_putchar('\n');
}
