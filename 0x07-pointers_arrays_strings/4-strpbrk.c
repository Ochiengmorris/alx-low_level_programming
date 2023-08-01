#include "main.h"

/**
 * _strpbrk - bytes
 * @s: points to char
 * @accept: points to char
 * Return: NULL value
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
