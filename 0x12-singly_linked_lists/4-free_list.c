#include "lists.h"
/**
 * free_list - function that frees a linked list.
 * @head: first element of the list.
*/
void free_list(list_t *head)
{
	list_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node->str);
		free(node);
	}
	free(head);
}
