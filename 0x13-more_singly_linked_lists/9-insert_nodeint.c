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
	unsigned int cont = 0;

	if ((*head) == NULL)
		return (NULL);

	node = (listint_t *)malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;

	if (idx == 0)
	{
		node->next = (*head);
		(*head) = node;
		return (node);
	}

	while (cont < (idx - 1))
	{
		if (temp->next == NULL)
		{
			free(node);
			return (NULL);
		}
		temp = temp->next;
		cont++;
	}

	if (cont == (idx - 1))
	{
		node->next = temp->next;
		temp->next = node;
		return (node);
	}
	else
	{
		return (NULL);
	}
}
