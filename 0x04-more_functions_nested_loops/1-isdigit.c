#include "main.h"
/**
 * _isdigit - Check (0-9) for some digit
 * @c: Integer holding the character
 *
 * Return: 1 for digit 0 not digit
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	return (0);
}
