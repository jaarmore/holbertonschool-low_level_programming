#include "holberton.h"
/**
 * _strcmp - Function that compares two string.
 * @s1: first string to compare.
 * @s2: second string to compare.
 * Return: a integer that represent the result of compare the string.
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0, result;

	result = s1[i] - s2[i];

	if (result != 0)
	{
		return (result);
	}
	else
	{
		while (result != 0 && s1[i] != '\0' && s2[i] != '\0')
		{
			result = s1[i] - s2[i];
			i++;
		}
		return (result);
	}
}
