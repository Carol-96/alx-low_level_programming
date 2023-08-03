#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a  linked list.
 * @head: pointer to first node
 *
 * Return: sum the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
