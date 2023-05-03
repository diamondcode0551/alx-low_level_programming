#include "lists.h"

/**
 * find_listint_loop - Finds loop in a linked list
 * @head: Linked list in search of
 *
 * Return: Address of node where loop starts or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *now = head;
	listint_t *fast = head;

	if (!head)
		return (NULL);

	while (now && fast && fast->next)
	{
		fast = fast->next->next;
		now = now->next;
		if (fast == now)
		{
			now = head;
			while (now != fast)
			{
				now = now->next;
				fast = fast->next;
			}
			return (fast);
		}
	}

	return (NULL);
}
