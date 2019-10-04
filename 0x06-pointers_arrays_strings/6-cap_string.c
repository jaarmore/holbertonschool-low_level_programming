#include "holberton.h"
/**
 * cap_string - function that capitalizes all words of a string.
 * @str: String to be checked and capitalized.
 * Return: pointer to string capitalized.
*/
char *cap_string(char *str)
{
	int count = 0;

	if (str[count] >= 'a' && str[count] <= 'z')
		str[count] -= 32;

	while (str[count] != '\0')
	{
		if ((str[count] >= 9 && str[count] <= 10) ||
		    (str[count] >= 32 && str[count] <= 34) ||
		    (str[count] >= 40 && str[count] <= 41) ||
		    (str[count] == 44 || str[count] == 46) ||
		    (str[count] == 59 || str[count] == 63) ||
		    (str[count] == 123 || str[count] == 125)
			)
		{
			if (str[count + 1] >= 'a' && str[count + 1] <= 'z')
				str[count + 1] -= 32;
		}

		count++;
	}

	return (str);
}
