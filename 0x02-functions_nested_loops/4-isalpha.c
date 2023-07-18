#include "main.h"

/**
 * _isalpha - function
 *
 * @d: is c an integer argument
 *
 * Return: Always 0 success
 */

int _isalpha(int d)
{

	if (d >= 97 && d <= 122)
	{
		return (1);
	}
	else if (d >= 65 && d <= 90)
	{
		return (1);
	}
	return (0);
}
