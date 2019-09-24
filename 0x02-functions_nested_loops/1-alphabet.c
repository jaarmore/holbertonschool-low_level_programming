#include "holberton.h"
/**
 * print_alphabet - print alphabet in lowercase
*/
void print_alphabet(void)
{
	int letter;

	for(letter = 97; letter <= 122; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
