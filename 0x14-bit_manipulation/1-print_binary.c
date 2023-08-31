#include "main.h"

/**
 * print_binary - print binary form of a number
 *
 * @n: decimal number to be converted.
 */

void print_binary(unsigned long int n)
{
	unsigned long int aux;
	int change;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (aux = n, change = 0; (aux >>= 1) > 0; change++)
		;


	for (; change >= 0; change--)
	{
		if ((n >> change) & 1)
			printf("1");
		else
			printf("0");
	}
}
