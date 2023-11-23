#include "main.h"


/**
 * get_bit - get the value of a bit at a index.
 *
 * @n: number to look.
 * @index: index of the bit we want to get
 *
 * Return: Value of bit at index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num;

	if (index > 64)
		return (-1);

	num = n >> index;


	return (num & 1);
}
