#include "holberton.h"
/**
 * rot13 - function thats encode a string to root13.
 * @str: string to be encoded.
 * Return: pointer with string encode.
*/
char *rot13(char *str)
{
	int i, j;

	char input[]  = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; input[j] != '\0'; j++)
		{
			if (str[i] == input[j])
			{
				str[i] = output[j];
				break;
			}
		}
	}

	return (str);
}
