#include "lists.h"

/**
 * pop_listint - Deletes head of node
 * @head: Pointer to first element in the list
 *
 * Return: Data in deleted element or  when list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
