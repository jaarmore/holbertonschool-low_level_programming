#include "lists.h"
/**
 * add_nodeint_end - function that add node at end of linked list.
 * @head: first element of the list.
 * @n: new element to add.
 * Return: the first element of the linked list.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = NULL;
	listint_t *last = (*head);

	node = (listint_t *)malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;

	if ((*head) == NULL)
	{
		(*head) = node;
		return ((*head));
	}
	while (last->next != NULL)
		last = last->next;
	last->next = node;

	return ((*head));
}
