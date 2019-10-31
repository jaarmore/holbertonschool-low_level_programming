#include "lists.h"
/**
 * _strlen - function that count the numbers of charaters of the string
 * @str: string to be counted.
 * Return: the numbers of characters counted.
*/
int _strlen(char *str)
{
	int cont = 0;

	if (str == NULL)
		return (NULL);
	while (str[cont] != '\0')
		cont++;
	return (cont);
}
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
		(*head)->len = _strlen((char *)str);
	}
	else
	{
		new = (list_t *)malloc(sizeof(list_t));
		if (new == NULL)
			return (NULL);
		new->str = strdup(str);
		new->len = _strlen((char *)str);
		new->next = (*head);
		(*head) = new;
	}
	return ((*new));
}
