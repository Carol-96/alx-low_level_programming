#include "lists.h"
#include <stdlib>

/**
 * get_nodeint_at_index - the nth node of the linked list.
 * @head: pointer 
 * @index:  index of the node
 *
 * Return: Return Null, if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
