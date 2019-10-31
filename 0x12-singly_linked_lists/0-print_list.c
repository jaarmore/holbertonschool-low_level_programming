#include "lists.h"
/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: pointer to start the list.
 * Return: numbers of elements the list.
*/
size_t print_list(const list_t *h)
{
	size_t cont = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		cont++;
		h = h->next;
	}
	return (cont);
}
