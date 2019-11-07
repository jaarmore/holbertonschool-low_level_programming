#include "lists.h"
/**
 * delete_nodeint_at_index - function that delete the node at index.
 * @head: first element of the list.
 * @index: the index of element to delete.
 * Return: 1 if success or -1 if fail.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node = NULL;
	listint_t *temp = NULL;
	listint_t *lenlist = (*head);
	unsigned int cont, sizelist;

	if ((*head) == NULL)
		return (-1);

	node = (*head);
	if (index == 0)
	{
		(*head) = (*head)->next;
		free(node);
		return (1);
	}
	for (sizelist = 0; lenlist != NULL; sizelist++)
		lenlist = lenlist->next;
	if (index > sizelist)
		return (-1);

	for (cont = 0; cont < (index - 1); cont++)
		node = node->next;
	if (cont == (index - 1))
	{
		temp = node->next;
		node->next = temp->next;
		free(temp);
		return (1);
	}
	else
	{
		free(node);
		return (-1);
	}
}
