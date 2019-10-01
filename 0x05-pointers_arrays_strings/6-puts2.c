#include "holberton.h"
/**
 * puts2 - function that prints every other character of a string.
 * @str: string to be evaluated.
*/
void puts2(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		if (count % 2 == 0)
		{
			_putchar(str[count]);
		}
		count++;
	}
	_putchar('\n');
}
