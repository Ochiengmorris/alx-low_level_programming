#include "lists.h"

/**
 * print_listint - prints the number of nodes.
 * @h: pointer to the list.
 *
 * Return: number of nodes = count.
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *mov = h;
	size_t count = 0;

	while (mov != NULL)
	{
		printf(" %d\n", mov->n);
		count++;
		mov = mov->next;
	}
	return (count);
}
