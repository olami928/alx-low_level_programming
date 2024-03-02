#include "lists.h"
/**
 * add_nodeint - adds a node to a linked list
 * @head: a double pointer to the linked list
 * @n: an integer
 * Return: the new linked list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));

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
		new_node->next = *head;
	}
	new_node->n = n;
	*head = new_node;
	return (*head);
}
