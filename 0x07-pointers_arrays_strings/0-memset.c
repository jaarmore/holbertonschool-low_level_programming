#include "holberton.h"
/**
 * _memset - function that fill memory with a constant byte.
 * @s: pointer to memory.
 * @b: constant used to fill.
 * @n: size of memory to fill.
 * Return: pointer with memory fills.
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
