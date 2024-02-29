#include "lists.h"

/**
 * add_node - adds a node to a linked list
 * @head: the head pointer of a linked list
 * @str: the pointer to the str
 * Return: the linked lsit
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(list_t));
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
		new_node->str = strdup(str);
		new_node->len = _strlen(str);
		*head = new_node;
	}
	return (*head);
}
