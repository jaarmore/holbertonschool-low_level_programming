#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - function that prints string.
 * @separator: string to print after the value.
 * @n: total value of parameters.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list pstring;
	unsigned int i;
	char *ptr_s;

	if (n == 0)
		return;

	va_start(pstring, n);
	for (i = 0; i < n; i++)
	{
		ptr_s = va_arg(pstring, char*);
		if (ptr_s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", ptr_s);
		}
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	va_end(pstring);
	printf("\n");
}
