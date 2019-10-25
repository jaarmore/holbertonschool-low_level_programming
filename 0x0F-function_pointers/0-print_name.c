#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - function that prints a name using function pointer.
 * @name: pointer to char.
 * @f: pointer function that call to print function.
*/
void print_name(char *name, void (*f)(char *))
{
	void (*ptr_f)(char *);

	if (name == NULL)
		return;

	if (f == NULL)
		return;

	ptr_f = f;
	ptr_f(name);
}
