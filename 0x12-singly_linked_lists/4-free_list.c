#include "lists.h"
/**
 * free_list - frees a linked lsit
 * @head: pointer to the end
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
	{
		return;
	}
	while (head->next != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	free(head->str);
	free(head);
}
