#include "main.h"

/**
 * flip_bits - flip bits converting one number to another.
 * @n: first number
 * @m: second number
 *
 * Return: number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int min;
	int res;

	min = n ^ m;
	res = 0;

	while (min)
	{
		res++;
		min = min & (min - 1);
	}

	return (res);
}
