#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers followed by a new line.
 * @separator: char to print next to number.
 * @n: total of values passed as parameters.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list printlist;

	if (n == 0)
		return;

	va_start(printlist, n);
	for (i = 0; i < n; i++)
	{
		printf("%u", va_arg(printlist, unsigned int));

		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(printlist);
}
