#include "lists.h"
#include <stdio.h>

/**
 * free_listint - frees a list
 *
 * @head:  The list
 *
 * Return: if error return Null
 */

void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
