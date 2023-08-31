#include "main.h"

/**
 * clear_bit - set value of a bit to 0.
 *
 * @n: pointer to decimal number.
 * @index: index to change
 *
 * Return: 1 if it worked.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int j;
	unsigned int aux;

	if (index > 64)
		return (-1);
	aux = index;
	for (j = 1; aux > 0; j = j * 2, aux--)
		;

	if ((*n >> index) & 1)
		*n -= j;

	return (1);
}
