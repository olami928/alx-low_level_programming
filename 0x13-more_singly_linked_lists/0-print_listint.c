#include "lists.h"

/**
 * print_listint - prints a linked list of integers
 * @h: pointer to the linked list
 * Return: the linked list
 */
size_t print_listint(const listint_t *h)
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
