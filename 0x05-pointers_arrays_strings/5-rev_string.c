#include "holberton.h"
/**
 * rev_string - function that reverses a string using pointers.
 * @s: string to reverse.
*/
void rev_string(char *s)
{
	int count = 0;
	int last, i;
	char temp;

	while (s[count] != '\0')
	{
		count++;
	}

	last = --count;

	for (i = 0; i < last; i++)
	{
		temp = s[i];
		s[i] = s[last];
		s[last] = temp;
		last--;
	}
}
