#ifndef _LIST_H
#define _LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - a singly linked list
 * @str: a string
 * @len: the length holder
 * @next: pointer to the next node
 */
typedef struct list_s
{
	char *str;
	size_t len;
	struct list_s *next;
} list_t;
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
int _strlen(const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
#endif
