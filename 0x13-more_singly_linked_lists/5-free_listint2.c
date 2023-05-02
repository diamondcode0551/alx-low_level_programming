#include "lists.h"

/**
 * free_listint2 - Frees linked list
 * @head: Pointer to list to be freed of type listint_t
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
