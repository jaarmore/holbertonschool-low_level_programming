#include "holberton.h"
/**
 * _isdigit - function that check for a digit 0 through 9
 * @c: value to be checked
 * Return: 1 if is a digit, 0 otherwise.
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
