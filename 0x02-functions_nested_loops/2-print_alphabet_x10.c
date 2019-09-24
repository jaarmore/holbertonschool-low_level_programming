#include "holberton.h"
/**
 * print_alphabet_x10 - print alphabet in lowercase 10 times
*/
void print_alphabet_x10(void)
{
	int count = 1;
	char letter;

	while (count <= 10)
	{
		letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		count++;
		_putchar('\n');
	}
}
