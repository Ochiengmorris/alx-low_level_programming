#include "main.h"
#include <stdio.h>

/**
 * print_square - Printing square lines depending on the integer x.
 * @size : The number of lines using '#' characters to use per row and column
 * Return: Void
 */
void print_square(int size)
{
	int x;
	int y;

	for (y = 0; y < n; y++)
	{
		for (x = 0; x < size; x++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
