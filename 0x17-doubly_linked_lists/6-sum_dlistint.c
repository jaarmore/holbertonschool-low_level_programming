#include "lists.h"
/**
 * sum_dlistint - function that sums all data of a double linked list.
 * @head: the first element of the list.
 * Return: the sum of all values of the nodes.
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
