#include "holberton.h"
/**
 * print_chessboard - function that prints the chessboard
 * @a: chessboard to print.
 * Return: Nothing
*/
void print_chessboard(char (*a)[8])
{
	int i, j;
	char *ptr;

	ptr = (char *)a;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(*ptr++);
		}
		_putchar('\n');
	}
}
