#include "lists.h"
/**
 * list_len - returns the length of a linked list
 * @h: the head pointer
 * Return: the length of lenght of a linked list
 */
size_t list_len(const list_t *h)
{
	int i;

	if (h == NULL)
	{
		return (0);
	}
	for (i = 1; h->next != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
