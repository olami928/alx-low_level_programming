#include "lists.h"

/**
 * print_listint - prints a linked list of integers
 * @h: pointer to the linked list
 * Return: the linked list
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
