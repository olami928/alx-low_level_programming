#include "lists.h"

/**
 * print_dlistint - Prints a doubly linked list of integers.
 * @h: Pointer to the head of the linked list.
 * Return: The number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	if (h == NULL)
	{
		return (0);
	}

	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}

