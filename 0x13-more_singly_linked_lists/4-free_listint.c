#include "lists.h"
/**
 * free_listint - function that frees a linked list.
 * @head: first element of the list
*/
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node);
	}
	free(head);
}
