#include "holberton.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - Function that returns a pointer to a newly allocate space
 * @str: the string to copy
 * Return: pointer with addres of newly string.
*/
char *_strdup(char *str)
{
	int len, count;
	char *c;

	len = strlen(str);
	len++;

	c = malloc(sizeof(char) * len);

	if (str == NULL || c == NULL)
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
	}

	return (c);
}
