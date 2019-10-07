#include "holberton.h"
/**
 * _memcpy - function that copies src to dest in memory area
 * @dest: pointer to memory destiny.
 * @src: pointer to src memory area.
 * @n: size of bytes to copied.
 * Return: pointer to memory copied.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
