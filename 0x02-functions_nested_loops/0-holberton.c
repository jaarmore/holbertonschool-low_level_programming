#include "holberton.h"
/**
 * main - entry point
 * Return: always return 0
*/
int main(void)
{
	unsigned int i;
	char title[] = "Holberton";

	for (i = 0; i < (sizeof(title) - 1); i++)
	{
		_putchar(title[i]);
	}
	_putchar('\n');
	return (0);
}
