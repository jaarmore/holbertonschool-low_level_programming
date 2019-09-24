#include "holberton.h"
/**
 * _abs - computes the absolute value of an integer.
 * @value: value to be computed.
 * Return: the absolute value of a number
 */
int _abs(int value)
{
	if (value < 0)
	{
		return (value * (-1));
	}
	else
	{
		return (value);
	}
}
