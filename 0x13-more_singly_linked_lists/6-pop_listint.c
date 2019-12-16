#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a linked list.
 * @head: first element of the linked list.
 * Return: the data of the node deleted.
*/
int pop_listint(listint_t **head)
{
	listint_t *node = NULL;
	int data;

	if ((*head) == NULL)
		return (0);

	node = (*head);
	data = node->n;
	(*head) = (*head)->next;
	free(node);

	return (data);
}
