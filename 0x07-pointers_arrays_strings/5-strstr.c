#include "holberton.h"
/**
 * _strstr - function that locates a substring
 * @haystack: string given
 * @needle: string to find
 * Return: the substring if found, or NULL otherwise
*/
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;
	char *temp;

	if (haystack == NULL || needle == NULL)
		return (NULL);

	if (*needle == "")
		return (haystack);

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			temp = haystack + i;
			j = 0;
			while (needle[j] == *temp && needle[j] != '\0')
			{
				j++;
				temp++;
			}
			if (needle[j] == '\0')
				return (haystack + i);
		}
		i++;
	}
	return (NULL);
}
