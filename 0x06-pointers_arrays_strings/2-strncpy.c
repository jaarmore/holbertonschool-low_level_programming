#include "holberton.h"
/**
 * _strncpy - function that copies a string.
 * @dest: pointer to string copied.
 * @src: string that be copied.
 * @n: size of characters to be copied.
 * Return: pointer with string copied.
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while ((i < n) && (src[i] != '\0'))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
