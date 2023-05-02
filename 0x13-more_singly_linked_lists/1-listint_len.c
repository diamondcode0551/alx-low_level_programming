#include "lists.h"

/**
 * listint_len - Returns number of elements
 * @h: listint type to reverse
 *
 * Return: Number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
