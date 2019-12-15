#include "lists.h"
/**
 * free_dlistint - function that frees a double linked list.
 * @head: the first element of the list.
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *last = head;

	while (head != NULL)
	{
		head = last->next;
		free(last);
		last = head;
	}
	free(last);
}
