#include "function_pointers.h"
/**
 * array_iterator - function that excecute a function given as parameter.
 * @array: array of type int to print.
 * @size: size of array.
 * @action: function to be executed.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;
	void (*ptr_act)(int);

	if (array == NULL)
		return;
	if (action == NULL)
		return;

	ptr_act = action;
	i = 0;

	while (i < size)
	{
		ptr_act(array[i]);
		i++;
	}
}
