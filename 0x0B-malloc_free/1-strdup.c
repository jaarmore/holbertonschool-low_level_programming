#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - Function that returns a pointer to a newly allocate space
 * @str: the string to copy
 * Return: pointer with addres of newly string.
*/
char *_strdup(char *str)
{
	int len, count;
	char *c;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	len++;

	c = malloc(sizeof(char) * len);

	if (c == NULL)
	{
		return (NULL);
	}
	else
	{
		count = 0;
		while (str[count] != '\0')
		{
			c[count] = str[count];
			count++;
		}
		c[count] = '\0';

		return (c);
	}
}
