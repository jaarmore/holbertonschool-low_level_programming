#include "lists.h"
/**
 * _strlen - function that count the numbers of charaters of the string
 * @str: string to be counted.
 * Return: the numbers of characters counted.
*/
int _strlen(char *str)
{
	int cont = 0;

	while (str[cont] != '\0')
		cont++;
	return (cont);
}
/**
 * add_node_end - Function that adds a new node at the end of a linked list.
 * @head: head of the linked list.
 * @str: string to be copied as data on the node.
 * Return: the address of the new node created.
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = NULL;
	list_t *last = (*head);

	node = (list_t *)malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	node->len = _strlen((char *)str);
	node->next = NULL;

	if ((*head) == NULL)
	{
		(*head) = node;
		return (*head);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = node;
	return ((*head));
}
