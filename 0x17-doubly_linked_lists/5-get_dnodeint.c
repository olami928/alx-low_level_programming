#include "lists.h"

/**
 * get_dnodeint_at_index - Gets a node at a given index.
 * @head: Pointer to the head of the doubly linked list.
 * @index: Index of the node to get.
 *
 * Return: Pointer to the node at the specified index, or NULL if not found.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp = head;

	for (i = 0; temp != NULL && i < index; i++)
	{
		temp = temp->next;
	}
	if (temp == NULL || i < index)
	{
		return (NULL);
	}
	return (temp);
}
