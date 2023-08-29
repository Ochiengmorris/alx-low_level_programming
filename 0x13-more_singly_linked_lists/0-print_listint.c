#include "lists.h"

/**
 * print_listint - prints the number of nodes.
 * @h: pointer to the list.
 *
 * Return: number of nodes = count.
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf(" %d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
