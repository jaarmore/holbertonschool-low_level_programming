#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node at the end of a list.
 * @head: first element of a double linked list.
 * @n: value of node.
 * Return: the address of the new node added.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = NULL;
	dlistint_t *aux = (*head);

	node = malloc(sizeof(dlistint_t *));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->prev = NULL;
	node->next = NULL;

	if ((*head) == NULL)
	{
		(*head) = node;
		return (node);
	}

	while (aux->next != NULL)
		aux = aux->next;
	aux->next = node;
	node->prev = aux;

	return (node);
}
