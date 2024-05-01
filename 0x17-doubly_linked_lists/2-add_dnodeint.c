#include "lists.h"
/**
 * add_dnodeint - adds a node to the beginning of adouble linked list
 * @head: pointer that points to the head
 * @n: the node to be added
 * Return: 0 Always
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(dlistint_t));

	new_node->n = n;
	new_node->prev = NULL;
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		new_node->next = NULL;
	}
	else
	{
		(*head)->prev = new_node;
		new_node->next = *head;
	}
	*head = new_node;

	return (*head);
}
