#include "lists.h"

/***/

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
