#include "lists.h"
list_t *create_node(const char *str);
/**
 * add_node_end - adds a node to the end of a linked list
 * @head: pointer to head of a linked list
 * @str: string pointer
 * Return: the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *new_node;

	temp = *head;
	if (head == NULL)
	{
		new_node = create_node(str);
	}
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node;
	return (*head);
}
/**
 * create_node - creates a node to the end of a linked list
 * @str: the string pointer
 * Return: the node to the end of the linked list
 */
list_t *create_node(const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = NULL;
	return (new_node);
}

