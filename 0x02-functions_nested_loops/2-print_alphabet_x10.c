#include "main.h"

/**
 * print_alphabet_x10 - it's a function
 *
 * Return - success
 */

void print_alphabet_x10(void)
{
	int c = 0;

	while (c < 10)
	{
		char d = 'a';

		while (d <= 'z')
		{
			_putchar(d);
			d++;
		}
	_putchar('\n');
	c++;
	}
}
