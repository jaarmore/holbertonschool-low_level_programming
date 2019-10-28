#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - function that prints anything.
 * @format: is a list of types of arguments passed to function.
*/
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list all;
	char *str;
	char *s = "";

	va_start(all, format);

	while ((format != NULL) && (format[i] != '\0'))
	{
		switch (format[i])
		{
		case 'c':
			printf("%s%c", s, va_arg(all, int));
			s = ", ";
			break;
		case 'i':
			printf("%s%d", s, va_arg(all, int));
			s = ", ";
			break;
		case 'f':
			printf("%s%f", s, va_arg(all, double));
			s = ", ";
			break;
		case 's':
			str = va_arg(all, char *);
			if (str == NULL)
			{
				str = "(nil)";
			}
			printf("%s%s", s, str);
			s = ", ";
			break;
		}
		i++;
	}
	va_end(all);
	printf("\n");
}
