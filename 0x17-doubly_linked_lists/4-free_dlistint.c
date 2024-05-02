#include "lists.h"
/**
 * free_dlistint - frees a linked list
 * @head: pointer to the node
 * Return: 0 on success
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		if (temp != NULL)
		{
			temp->prev = NULL;
		}
		head = temp;
	}
}
