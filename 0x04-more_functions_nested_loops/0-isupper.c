#include "main.h"
#include <stdio.h>

/**
 * _isupper - Checks if paramter c represents an uppercase letter.
 * @d: representing a character
 * Return: Always  success.
 */
int _isupper(int d)
{
	if (d >= 65 && d <= 90)
	{
		return (1);
	}
	return (0);
}
