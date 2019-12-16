#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the n node of the linked list.
 * @head: first element of the list.
 * @index: number of the node to return.
 * Return: the node where find the index.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = NULL;
	unsigned int cont;

	if (head == NULL)
		return (NULL);

	node = head;
	for (cont = 0; cont < index; cont++)
	{
		if (node->next == NULL)
			return (NULL);
		node = node->next;
	}

	return (node);
}
