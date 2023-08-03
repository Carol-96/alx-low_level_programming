#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint - add node at the beginning
  *
  * @head: double pointer
  * @n: int adde list
  * Return: if failed, return null
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
