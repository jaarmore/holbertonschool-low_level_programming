#include "holberton.h"
/**
 * print_last_digit - function that prints the last digit of a number.
 * @number: the number to be checked
 * Return: the last digit obtained from number.
*/
int print_last_digit(int number)
{
	int last_digit;

	last_digit = (number % 10);

	if (last_digit < 0)
	{
		last_digit = last_digit * (-1);
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
