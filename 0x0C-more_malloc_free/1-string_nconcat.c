#include "holberton.h"
#include <stdlib.h>
/**
 * lengthstr - function that counts numbers charactes of string.
 * @str: string to count.
 * Return: numbers of characters.
*/
int lengthstr(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		count++;
	}

	return (count);
}
/**
 * string_nconcat - function that concatenates two string using malloc.
 * @s1: first string.
 * @s2: second string.
 * @n: numbers of elements to concatenate.
 * Return: pointer with the new string concatenate.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2;
	char *ptr;

	/** if NULL is passed, treat it as an empty string **/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = lengthstr(s1);
	len2 = lengthstr(s2);
	/* If n is >= to the length of s2 then use the entire string s2 **/
	if (n >= len2)
	{
		ptr = malloc(sizeof(char) * (len1 + len2 + 1));
	}
	else
	{
		ptr = malloc(sizeof(char) * (len1 + n + 1));
	}

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];

	if (len2 < n)
	{
		for (j = 0; s2[j] != '\0'; j++, i++)
			ptr[i] = s2[j];
	}
	else
	{
		for (j = 0; j < n; j++, i++)
			ptr[i] = s2[j];
	}
	ptr[i] = '\0';
	return (ptr);
}
