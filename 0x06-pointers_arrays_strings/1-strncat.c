#include "holberton.h"
/**
 * _strncat - Function that concatnates two string, having n charactes.
 * @dest: String that be append.
 * @src: Source string.
 * @n: numbers of characters to append on dest.
 * Return: a pointer with the characters append.
*/
char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int i = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	while ((i < n) && (src[i] != '\0'))
	{
		dest[len] = src[i];
		i++;
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
