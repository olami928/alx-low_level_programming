#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to a pointer to the head of the list.
 * @idx: Index where the new node should be added.
 * @n: Value to store in the new node.
 *
 * Return: Address of the new node or NULL if it fails.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current = *h;
	unsigned int i;

	if (!h)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	for (i = 0; current && i < idx - 1; i++)
		current = current->next;

	if (i != idx - 1)
	{
		free(new_node);
		return (NULL); /* Index out of bounds */
	}

	if (!current->next)
		return (add_dnodeint_end(h, n));

	new_node->next = current->next;
	new_node->prev = current;
	current->next->prev = new_node;
	current->next = new_node;

	return (new_node);
}

