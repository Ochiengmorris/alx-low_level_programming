#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Print numbers between 0 to 14 incl.
 *@b, c - integers
 * Return: Void.
 */
void more_numbers(void)
{
	int b;
	int c;

	for (b = 0; b < 10; b++)
	{
		c = 0;
		while (c <= 14)
		{
			if (c >= 10)
			{
				_putchar(c / 10 + '0');
			}
				_putchar(c % 10 + '0');
			c++;
		}
	_putchar('\n');
	}
}
