#ifndef SINGLE_LINKED_LISTS_H
#define SINGLE_LINKED_LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
/**
 * struct list_s - single linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to rhe next node
 *
 * Description: single linked list node strucrure
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
void print_before(void) __attribute__((constructor));

#endif
