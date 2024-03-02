#include "lists.h"
/**
 * listint_len - a function that returns the len of a linked list
 * @h - the head pointer
 * Return: the len of the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	if (h == NULL)
	{
		return (0);
	}
	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
