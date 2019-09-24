#include "holberton.h"
/**
 * jack_bauer - Prints every minute of the day of Jack Bauer.
*/
void jack_bauer(void)
{
	int h, s, ml;

	for (h = 0; h < 24; h++)
	{
		for (s = 0; s <= 5; s++)
		{
			for (ml = 0; ml <= 9; ml++)
			{
				_putchar((h / 10) + '0');
				_putchar((h % 10) + '0');
				_putchar(':');
				_putchar(s + '0');
				_putchar(ml + '0');
				_putchar('\n');
			}
		}
	}
}
