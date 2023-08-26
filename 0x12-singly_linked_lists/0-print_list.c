#include "lists.h"

/**
 * print_list - function that prints all the elements of a list.
 *
 * @h: is a pointer to the list_t (also, it is constant.)
 *
 * Return: number of elements
 */

size_t print_list(const list_t *h)
{
	size_t n;

	n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] %s\n", "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		n++;
		h = h->next;
	}
	return (n);
}
