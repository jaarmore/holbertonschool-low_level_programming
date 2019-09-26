#include "holberton.h"
/**
 * _isupper - function that check if a letter is uppercase
 * @c: value to be checked
 * Return: 1 if is uppercase, 0 if is lowercase
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
