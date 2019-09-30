#include "holberton.h"
/**
 * _strlen - function that returns the length of a string.
 * @s: param to be evaluated
 * Return: return an integer that represent the length of string.
*/
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	return (count);
}
