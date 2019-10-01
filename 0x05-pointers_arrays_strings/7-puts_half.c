#include "holberton.h"
/**
 * puts_half - function that prints half of a string.
 * @str: string to be proceded.
*/
void puts_half(char *str)
{
	int count = 0;
	int half;

	while (str[count] != '\0')
	{
		count++;
	}

	if (count % 2 == 0)
	{
		half = count / 2;
	}
	else
	{
		half = (count - 1) / 2;
	}
	while (str[half] != '\0')
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
