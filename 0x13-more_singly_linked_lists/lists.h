#ifndef _LISTS_H_
#define _LISTS_H_
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
/**
 * struct listint_s - self referential structure for creating nodes
 * for a singly linked list
 * @n: the integer
 * @next: self referential pointer
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;

} listint_t;
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
#endif
