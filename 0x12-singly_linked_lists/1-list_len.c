#include "lists.h"
/**
 * list_len - function that returns the number of elements in a linked list.
 * @h: first element of the list.
 * Return: numbers of elements of the list.
*/
size_t list_len(const list_t *h)
{
	size_t len = 0;

	if (h == NULL)
		return (len);
	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
