#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given position.
 * @head: Pointer to a pointer to the head of the list.
 * @index: Index of the node to delete.
 *
 * Return: 1 if successful, -1 if failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	dlistint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		i++;
	}

	current = temp->next;
	if (current != NULL)
	{
		temp->next = current->next;
		if (current->next != NULL)
			current->next->prev = temp;
		free(current);
		return (1);
	}

	return (-1);
}

