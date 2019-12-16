#include "lists.h"
/**
 * listint_len - function that returns numbers of elements in a linked list.
 * @h: first element of the list.
 * Return: the numbers of nodes in list.
*/
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
