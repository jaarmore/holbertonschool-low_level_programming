#include "holberton.h"
/**
 * _strpbrk - function that search a string for any of set of bytes.
 * @s: source string
 * @accept: list to characters to find.
 * Return: pointer to string searched.
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j, exist;
	char *str = NULL;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				exist = 1;
				str = (s + i);
				break;
			}
		}
		if (exist != 0)
			return (str);
	}
	return (str);
}
