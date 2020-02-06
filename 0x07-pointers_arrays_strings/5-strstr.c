#include "holberton.h"
/**
 * _strstr - function that locates a substring
 * @haystack: string given
 * @needle: string to find
 * Return: the substring if found, or NULL otherwise
*/
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	char *temp;

	if (haystack == NULL || needle == NULL)
		return (NULL);

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			temp = haystack + i;
			while (*needle == *temp && *needle != '\0')
			{
				needle++;
				temp++;
			}
			if (*needle == '\0')
				return (haystack + i);
		}
		i++;
	}
	return (NULL);
}
