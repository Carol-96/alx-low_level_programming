#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - deletes the head node of a list
 * @head:  double pointer
 *
 *Return: if empty, return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *start;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	start = *head;
	*head = start->next;
	n = start->n;
	free(start);
	return (n);
}

