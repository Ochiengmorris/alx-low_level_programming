#include "main.h"

/**
 * rev_string - reverse a string.
 *
 *@s: the string to be reversed.
 */

void rev_string(char *s)
{
	int length, i, j;
	char v1, v2;

	for (length = 0; s[length] != '\0'; length++)
	{
	}

	i = length - 1;
	j = 0;

	while (i > j)
	{
		v1 = s[i];
		v2 = s[j];
		s[j] = v2;
		s[i] = v1;
		i--;
		j++;
	}
}
