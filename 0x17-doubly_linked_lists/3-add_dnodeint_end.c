#include "lists.h"
/**
 * add_dnodeint_end - adds a node at the end of a double linked list
 * @head: pointer to the head
 * @n: the node to be added
 * Return: 0 on sucess
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	temp = *head;
	if (head == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(dlistint_t));

	new_node->n = n;
	new_node->next = NULL;
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
		new_node->prev = temp;
	}
	return (*head);
}
