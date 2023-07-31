#include "lists.h"
#include <stdio.h>

/**
 * insert_nodeint_at_index - inserting a new node
 * @head: A double pointer to the first node
 * @idx: index of the new node
 * @n: new node value inserted
 *
 * Return: return pointer to Null or new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp, *new;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		temp = *head;
		for (i = 0; i < idx - 1 && temp != NULL; i++)
		{
			temp = temp->next;
		}
		if (temp == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
