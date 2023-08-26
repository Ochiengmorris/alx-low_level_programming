#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to list_t
 * @str: pointer to the first node in list_t
 * Return: a poitner to the new string or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	int count;;
	list_t *new;

	if (!str)
		return (NULL);

	new = malloc(sizeof(list_t));
	count = 0;
	if (new)
	{
		new->str = strdup(str);
		if (!new->str)
		{
	                free(new);
			return (NULL);
		}
		while (new->str[count])
			count++;
		
                new->len = count;
		new->next = *head;
		*head = new;
		return (new);
	}
	return (NULL);
}
