#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new node at
 * given position.
 * @head: first element of the list.
 * @idx: index where the new node is to be added.
 * @n: value to add into list.
 * Return: the addres of the new node.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node = NULL;
	listint_t *temp = (*head);
	listint_t *lenlist = (*head);
	unsigned int cont, sizelist;

	node = (listint_t *)malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;

	if (idx == 0 || (*head) == NULL)
	{
		node->next = (*head);
		(*head) = node;
		return (node);
	}
	for (sizelist = 0; lenlist != NULL; sizelist++)
		lenlist = lenlist->next;
	if (idx > sizelist)
	{
		free(node);
		return (NULL);
	}
	for (cont = 0; cont < (idx - 1); cont++)
		temp = temp->next;
	if (cont == (idx - 1) && (temp != NULL || temp->next != NULL))
	{
		node->next = temp->next;
		temp->next = node;
		return (node);
	}
	else
	{
		free(node);
		return (NULL);
	}
}
