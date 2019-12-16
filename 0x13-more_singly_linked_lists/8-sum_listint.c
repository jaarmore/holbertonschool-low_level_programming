#include "lists.h"
/**
 * sum_listint - function that returns the sum of all data in a linked list.
 * @head: first element of the linked list.
 * Return: the sum of all elements of the linked list.
*/
int sum_listint(listint_t *head)
{
	listint_t *node = NULL;
	int sumList = 0;

	if (head == NULL)
		return (0);

	node = head;
	while (node != NULL)
	{
		sumList += node->n;
		node = node->next;
	}

	return (sumList);
}
