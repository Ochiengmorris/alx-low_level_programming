#include "lists.h"

/**
 * list_len - returns number of all elements in a list.
 *
 * @h: pointer to the const list list_t.
 *
 * Return list.
 */

size_t list_len(const list_t *h)
{
    size_t n;

    n = 0;

    while (h != NULL)
    {
        n++;
        h = h -> next;
    }
    return (n);
}
