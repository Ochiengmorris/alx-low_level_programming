#include "lists.h"

/**
 * free_listint2 - frees list and resets head to null.
 *
 * @head: pointer to the list.
 */

void free_listint2(listint_t **head)
{
	listint_t *now = *head;

	if (now == NULL)
		return;

	while (now)
	{
		listint_t *used = now;

		now = now->next;
		free(used);
	}
	*head = NULL;
}
