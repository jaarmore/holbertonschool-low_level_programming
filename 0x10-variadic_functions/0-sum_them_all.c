#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all parameters.
 * @n: quantity of paramenters that function received.
 * Return: the sum of all parameters.
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list sumlist;

	if (n == 0)
		return (0);

	sum = 0;
	va_start(sumlist, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(sumlist, unsigned int);
	}
	va_end(sumlist);
	return (sum);
}
