#include "lists.h"

/**
 * free_listint - frees the memory allocated int list prior.
 *
 * @head: pointer to the root of the list
 */


void free_listint(listint_t *head)
{
	listint_t *now = head;

	while (now != NULL)
	{
		listint_t *used = now;

		now = now->next;
		free(used);
	}
	head = NULL;
}
