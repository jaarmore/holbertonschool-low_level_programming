#include "lists.h"
/**
 * print_listint - function that prints all elements of a linked list.
 * @h: first element of the linked list.
 * Return: the numbers of nodes in linked list.
*/
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
