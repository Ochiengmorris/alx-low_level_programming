#include "lists.h"

/**
 * listint_len - lists the length of the list.
 *
 * @h: pointer.
 *
 * Return: returns length of the list.
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
