#include "lists.h"
/**
 * sum_dlistint - sums a linked list
 * @head: pointer to the head
 * Return: 0 on success
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
