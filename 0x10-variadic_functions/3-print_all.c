#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#ifndef IS_VALID
#define is_valid(x) (x == 'c' || x == 'i' || x == 'f' || x == 's')
#endif
/**
 * print_all - function that prints anything.
 * @format: is a list of types of arguments passed to function.
*/
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list all;
	char *str;

	va_start(all, format);
	while ((format[i] != '\0') && (format != NULL))
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", (char) va_arg(all, int));
			break;
		case 'i':
			printf("%d", va_arg(all, int));
			break;
		case 'f':
			printf("%f", (float) va_arg(all, double));
			break;
		case 's':
			str = va_arg(all, char *);
			if (str != NULL)
			{
				printf("%s", str);
				break;
			}
			printf("(nil)");
			break;
		}
		if (is_valid(format[(i + 1)]))
			printf(", ");
		i++;
	}
	va_end(all);

	printf("\n");
}
