#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at beginning of a dlist.
 * @head: firs element of the double linked list.
 * @n: value of the new node.
 * Return: the address of the new element.
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = new_node(n);

	if (node == NULL)
		return (NULL);

	if ((*head) == NULL)
	{
		(*head) = node;
		return (node);
	}

	(*head)->prev = node;
	node->next = (*head);
	(*head) = node;

	return (node);
}
