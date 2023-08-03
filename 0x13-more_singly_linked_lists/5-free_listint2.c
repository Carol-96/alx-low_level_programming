#include "lists.h"
#include <stdio.h>

/**
 * free_listint2 - function that frees a list
 * @head:  double pointer of lists
 *
 * Return: Return void
 */

void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}
