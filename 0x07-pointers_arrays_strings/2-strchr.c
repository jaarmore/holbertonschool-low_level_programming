#include "holberton.h"
#include <stdio.h>
/**
 * _strchr - function that locates a character in a string.
 * @s: pointer to a string of searching.
 * @c: character to be finded.
 * Return: pointer to first occurence of character or NULL if no exist.
*/
char *_strchr(char *s, char c)
{
	char *ptr = s;

	if (!ptr)
	{
		return (NULL);
	}

	while (*ptr != '\0')
	{
		if (*ptr == c)
			return (ptr);
		ptr++;
	}
	return (ptr);
}
