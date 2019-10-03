#include "holberton.h"
/**
 * string_toupper - function that changes all lowercase letters to uppercase.
 * @str: pointer to array, that represents a string.
 * Return: pointer with uppercase letters.
 */
char *string_toupper(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		if (str[count] >= 'a' && str[count] <= 'z')
		{
			str[count] -= 32;
		}
		count++;
	}

	return (str);
}
