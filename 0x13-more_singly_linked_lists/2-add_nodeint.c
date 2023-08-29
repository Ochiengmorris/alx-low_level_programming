#include "lists.h"

/**
 * add_nodeint - adds nodes/ node at beginning.
 *
 * @n: int value for the new node added.
 * @head: pointer to the head address of the list.
 *
 * Return: address of elemnt.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add;

	add = malloc(sizeof(listint_t));

	if (add == NULL)
	{
		return (NULL);
	}

	add->n = n;
	add->next = *head;

	*head = add;

	return (add);
}
