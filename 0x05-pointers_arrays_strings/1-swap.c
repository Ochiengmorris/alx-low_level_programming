#include "main.h"

/**
 * swap_int - swap the value of two integers.
 *
 * @a: first parameter.
 * @b: second parameter.
 *
 */

void swap_int(int *a, int *b)
{
	int c;

	c = 0;
	c = *a;
	*a = *b;
	*b = c;
}
