#include "lists.h"
/**
 * add_node - Function that adds a new node at the beginning of aa linked list.
 * @head: head of the linked list.
 * @str: string to be copied as data on the node.
 * Return: the address of the new node created.
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = NULL;

	if ((*head) == NULL)
	{
		(*head) = (list_t *)malloc(sizeof(list_t));
		if ((*head) == NULL)
			return (NULL);
		(*head)->str = strdup(str);
		(*head)->len = strlen(str);
	}
	else
	{
		new = (list_t *)malloc(sizeof(list_t));
		if (new == NULL)
			return (NULL);
		new->str = strdup(str);
		new->len = strlen(str);
		new->next = (*head);
		(*head) = new;
	}
	return ((*head));
}
