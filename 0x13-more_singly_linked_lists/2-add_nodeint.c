#include "lists.h"
/**
 * add_nodeint - function that adds new node at the beginning of a linked list.
 * @head: first element of the linked list.
 * @n: value of the node.
 * Return: the address of the first element the linked list.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = NULL;

	node = (listint_t *)malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = (*head);
	(*head) = node;

	return ((*head));
}
