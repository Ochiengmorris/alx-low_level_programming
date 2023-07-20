#include "main.h"
#include <stdio.h>

/**
 * print_numbers - Print numbers between 0 to 9 incl.
 *@b - integer
 * Return: Void.
 */
void print_numbers(void)
{
	int b;

	for (b = 0; b < 10; b++)
	{
		_putchar(b + '0');
	}
	_putchar('\n');
}
