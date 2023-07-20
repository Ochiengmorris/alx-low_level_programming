#include "main.h"
#include <stdio.h>

/**
 * _isupper - Checks if paramter c represents an uppercase letter.
 * @c: representing a character
 * Return: Always  success.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
