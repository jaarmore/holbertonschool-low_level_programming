#include "lists.h"
/**
 * free_listint2 - function that frees a linked list.
 * @head: first node of the list.
*/
void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head == NULL)
		return;

	while ((*head) != NULL)
	{
		node = (*head);
		(*head) = (*head)->next;
		free(node);
	}
	(*head) = NULL;
}
