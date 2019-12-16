#include "holberton.h"
/**
 * binary_to_uint - function that converts a binary number to unsigned int.
 * @b: pointer that represents the binary string to convert.
 * Return: the binary number converted to unsigned int.
*/
unsigned int binary_to_uint(const char *b)
{
	int i, j, len;
	unsigned int number = 0, multi = 1;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
	}
	for (len = 0; b[len] != '\0'; len++)
		;
	for (j = (len - 1); j >= 0; j--)
	{
		if (b[j] == '1')
			number += multi;
		multi = multi << 1;
	}
	return (number);
}
