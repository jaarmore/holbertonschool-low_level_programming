#include "holberton.h"
/**
 * _strcat - function that concatenates two strings.
 * @dest: string to be concatenate.
 * @src: string source.
 * Return: a string with two strings concatenates.
*/
char *_strcat(char *dest, char *src)
{
	int len = 0;
	int i = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	while (src[i] != '\0')
	{
		dest[len] = src[i];
		i++;
		len++;
	}

	dest[len] = '\0';

	return (dest);
}
