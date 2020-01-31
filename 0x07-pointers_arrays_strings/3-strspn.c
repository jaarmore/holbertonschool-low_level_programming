#include "holberton.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: source of string
 * @accept: list of char to search s characters.
 * Return: the number of characters that exist in s
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j, exist;
	unsigned int cont = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		exist = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				cont++;
				exist = 1;
				break;
			}
		}
		if (exist == 0)
			break;
	}
	return (cont);
}
