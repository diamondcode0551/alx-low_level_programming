#include <stddef.h>
#include "lists.h"
#include <stdlib.h>

/**
 * list_len - Returns the number of elements in the linked list
 * @h: Pointer to the list_t list
 * Return: Number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
