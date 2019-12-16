#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns nth node of a list.
 * @head: the first element of the double linked list.
 * @index: the index to search in the list.
 * Return: the node if found, or NULL otherwise.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *aux = head;
	unsigned int count;

	if (head == NULL)
		return (NULL);

	count = 0;
	while (count < index && aux != NULL)
	{
		aux = aux->next;
		count++;
	}
	return (aux);
}
