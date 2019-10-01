#include "holberton.h"
/**
 * print_rev - function that prints a string, in reverse.
 * @s: string that be reverse.
*/
void print_rev(char *s)
{
	int count = 0;
	char *revs;

	revs = s;

	while (s[count] != '\0')
	{
		count++;
	}
	count--;
	while (count >= 0)
	{
		_putchar(revs[count]);
		count--;
	}
	_putchar('\n');
}
