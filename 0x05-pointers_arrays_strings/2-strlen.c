#include "main.h"

/**
 * _strlen - calculate the length of a string.
 *
 * @s: the string to calculate it's length.
 * Return: length of a string.
 */

int _strlen(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
