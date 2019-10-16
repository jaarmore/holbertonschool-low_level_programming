#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - concat two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: pointer with two strings concats.
*/
char *str_concat(char *s1, char *s2)
{
	int len1, len2;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	while (s1[len1] != '\0')
		len1++;
	len1++;
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;
	len2++;
	ptr = malloc(sizeof(char) * (len1 + len2));
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		len1 = 0;
		while (s1[len1] != '\0')
		{
			ptr[len1] = s1[len1];
			len1++;
		}
		len2 = 0;
		while (s2[len2] != '\0')
		{
			ptr[len1] = s2[len2];
			len2++;
			len1++;
		}
		ptr[len1] = '\0';
		return (ptr);
	}
}
