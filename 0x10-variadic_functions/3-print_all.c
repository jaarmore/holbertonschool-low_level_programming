#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * is_valid - function that checks the next argument passed to function
 * @c: value to be checked.
 * Return: 0 if no exist, 1 otherwise.
*/
int is_valid(char c)
{
	char value[] = "cifs";
	int i = 0, cont = 0;

	while (c != value[i] && value[i] != '\0')
	{
		cont++;
		i++;
	}
	return (cont);
}
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
		}
		if ((format[i + 1] != '\0') && is_valid(format[(i + 1)]) <= 3)
			printf(", ");
		i++;
	}
	va_end(all);

	printf("\n");
}
