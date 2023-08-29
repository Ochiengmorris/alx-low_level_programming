#include "lists.h"

/**
 * add_nodeint_end - ...
 *
 * @head: ...
 * @n: ...
 *
 * Return: address of new value.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *mov = *head;
	listint_t *newend;

	newend = malloc(sizeof(listint_t));

	if (newend != NULL)
	{
		newend->n = n;
		newend->next = NULL;
	}
	else
	{
		return (NULL);
	}
	if (mov != NULL)
	{
		while (mov->next != NULL)
		{
			mov = mov->next;
		}
		mov->next = newend;
	}
	else
	{
		*head = newend;
	}
	return (newend);
}
