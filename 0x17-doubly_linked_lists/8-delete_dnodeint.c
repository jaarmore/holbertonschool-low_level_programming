#include "lists.h"
/**
 * delete_dnodeint_at_index - function that deletes a node.
 * @head: first element of the list.
 * @index: element to be deleted.
 * Return: 1 if succeeded, -1 otherwise.
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *prev_node, *aux_node, *lenlist = (*head);
	unsigned int cont, sizelist;

	if (head == NULL && index != 0)
		return (-1);

	if (index == 0 && (*head) == NULL)
		return (1);

	for (sizelist = 0; lenlist != NULL; sizelist++)
		lenlist = lenlist->next;

	if (index > sizelist)
		return (-1);

	prev_node = (*head);

	for (cont = 0; cont < (index - 1); cont++)
	{
		prev_node = prev_node->next;
	}
	if (prev_node != NULL)
	{
		aux_node = prev_node->next;
		prev_node->next = aux_node->next;
		aux_node->next->prev = prev_node;
		free(aux_node);
		return (1);
	}
	return (-1);
}
