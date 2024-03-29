#ifndef _LIST_H_
#define _LIST_H_

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
  * struct list_s - singly linked list
  * @str: string - (malloc'ed string)
  * @len: length of the string
  * @next: points to the next node
  *
  * Description: singly linked list node structure
  */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

unsigned int _strlen(const char *str);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
void first(void) __attribute__((constructor));

#endif /* for _LIST_H_ */
