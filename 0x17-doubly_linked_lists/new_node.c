#include "lists.h"
/**
 * new_node - function that creates new node for double linked list.
 * @data: value of node.
 * Return: the new node created.
*/
dlistint_t *new_node(int data)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t *));
	if (node == NULL)
		return (NULL);

	node->n = data;
	node->prev = NULL;
	node->next = NULL;

	return (node);
}
