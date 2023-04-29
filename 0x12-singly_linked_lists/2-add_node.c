#include <stddef.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Adds a node at the beginning of a linked list
 * @head: Double pointr to the list_t list
 * str: New string to add in the node
 * Return: Address of the new element or NULL when failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_n;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_n = malloc(sizeof(list_t));
	if (!new_n)
		return (NULL);

	new_n->str = strdup(str);
	new_n->len = len;
	new_n->next = (*head);
	(*head) = new_n;

	return (*head);
}
