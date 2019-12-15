#include "lists.h"
/**
 * dlistint_len - function that returns the number of elements in a linked list.
 * @h: first element of double linked list.
 * Return: number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	if (h == NULL)
		return (len);

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
