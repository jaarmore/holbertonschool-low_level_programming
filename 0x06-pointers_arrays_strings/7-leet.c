#include "holberton.h"
/**
 * leet - Function that encodes a string into 1337.
 * @str: string to be encode.
 * Return: string encode into 1337 format.
*/
char *leet(char *str)
{
	int i, j;
	char letter[] = "aeotlAEOTL";
	char digits[] = "4307143071";

	i = 0;

	while (str[i] != '\0')
	{
		j = 0;
		while (letter[j] != '\0')
		{
			if (str[i] == letter[j])
			{
				str[i] = digits[j];
			}
			j++;
		}
		i++;
	}

	return (str);
}
