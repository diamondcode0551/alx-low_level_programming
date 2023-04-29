#include <stddef.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a linked list
 * @head: The list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *list;

	while (head)
	{
		list = head->next;
		free(head->str);
		free(head);
		head = list;
	}
}
