#include "holberton.h"
/**
 * _puts - function that prints a string, followed by a new line.
 * @str: string to be printed on stdout.
*/
void _puts(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}
}
