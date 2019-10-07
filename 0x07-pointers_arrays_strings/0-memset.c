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
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
