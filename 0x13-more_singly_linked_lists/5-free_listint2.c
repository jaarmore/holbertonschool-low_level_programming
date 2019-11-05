#include "lists.h"
/**
 * free_listint2 - function that frees a linked list.
 * @head: first node of the list.
*/
void free_listint2(listint_t **head)
{
	listint_t *node;

	while ((*head) != NULL)
	{
		node = (*head);
		(*head) = (*head)->next;
		free(node);
	}
	free((*head));
	(*head) = NULL;
}
