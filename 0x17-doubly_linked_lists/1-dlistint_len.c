#include "lists.h"
/**
 * dlistint_len - returns the length ofa linked list
 * @h: pointer to the linked list
 * Return: 0 Always
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	if (h == NULL)
	{
		return (0);
	}
	for (count = 0; h != NULL; count++)
	{
		h = h->next;
	}
	return (count);
}
