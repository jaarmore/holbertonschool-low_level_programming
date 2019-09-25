#include "holberton.h"
#include <stdio.h>
/**
 * times_table - function that prints 9 times table, starting with 0.
*/
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			printf("%d", (i * j));

			if (j != 9)
			{
				print(",  ");
			}
		}
		_putchar('\n');
	}
}
