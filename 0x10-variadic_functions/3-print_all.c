#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - function that prints anything.
 * @format: is a list of types of arguments passed to function.
*/
void print_all(const char * const format, ...)
{
	int i = 0, count;
	va_list all;
	char *str;

	va_start(all, format);
	while ((format[i] != '\0') && (format != NULL))
	{
		count = 0;
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(all, int));
			break;
		case 'i':
			printf("%d", va_arg(all, int));
			break;
		case 'f':
			printf("%f", va_arg(all, double));
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
		default:
			++count;
			break;
		}
		if ((count == 0) && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	va_end(all);

	printf("\n");
}
