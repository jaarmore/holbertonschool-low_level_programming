#include "holberton.h"
/**
 * _strcpy - function that copies the string pointed to by src.
 * @dest: pointer to be copied.
 * @src: string to copied
 * Return: pointer to string copied.
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
