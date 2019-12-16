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
/**
 * insert_dnodeint_at_index - function that insert a node at given position.
 * @h: head of the dobule linked list.
 * @idx: the index given to insert a new node.
 * @n: the value of new the element to insert.
 * Return: the address of the new node or NULL otherwise.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *prev_node, *last_node, *node = NULL, *lenlist = (*h);
	unsigned int cont, sizelist;

	node = new_node(n);
	if (node == NULL)
		return (NULL);
	if (h == NULL && idx != 0)
		return (NULL);
	if (idx == 0 || (*h) == NULL)
	{
		node->next = (*h);
		(*h) = node;
		return (node);
	}
	for (sizelist = 0; lenlist != NULL; sizelist++)
		lenlist = lenlist->next;
	if (idx > sizelist)
	{
		free(node);
		return (NULL);
	}
	prev_node = last_node = (*h);
	for (cont = 0; cont < idx; cont++)
	{
		prev_node = last_node;
		last_node = last_node->next;
	}
	if (cont == idx && last_node != NULL)
	{
		prev_node->next = node;
		node->prev = prev_node;
		node->next = last_node;
		last_node->prev = node;
		return (node);
	}
	else
	{
		free(node);
		return (NULL);
	}
}
