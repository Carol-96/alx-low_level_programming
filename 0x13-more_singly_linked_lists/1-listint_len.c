#include "lists.h"
#include <stdio.h>

/**
 * listint_len - the number of elements in a list.
 *
 * @h: pointer to the head
 *
 * Return: return the number of elements
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	h = h->next;
		count++;
	}
	return (count);
}
