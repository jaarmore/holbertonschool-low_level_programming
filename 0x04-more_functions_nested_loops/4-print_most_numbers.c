#include "holberton.h"
/**
 * print_most_numbers - function that prints numbers from 0 to 9
 * excep number 2 and 4.
*/
void print_most_numbers(void)
{
	int i = 48;

	while (i <= '9')
	{
		if (i == '2' || i == '4')
		{
		}
		else
		{
			_putchar(i);
		}
		i++;
	}
	_putchar('\n');
}
