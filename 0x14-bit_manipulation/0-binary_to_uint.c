#include "main.h"

/**
 * binary_to_uint - convert a binary number to unsigned integer.
 *
 * @b: char values
 *
 * Return: converted dec number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int tot, raise;
	int size;

	if (b == NULL)
		return (0);

	for (size = 0; b[size]; size++)
	{
		if (b[size] != '1' && b[size] != '0')
			return (0);
	}

	for (tot = 0, size = 1, size--; size >= 0; size--, raise = raise * 2)
	{
		if (b[size] == '1')
			tot = tot + raise;
	}

	return (tot);
}
