#include "lists.h"

/**
 * add_nodeint - Add new node at the beginning
 * @head: pointer to first node
 * @n: data to be added in new node
 *
 * Return: Pointer to new node or NULL when it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
