#include "main.h"

/**
 *_islower - checking for a lowercase character.
 *@c: letter being tested
 * Return: Always 0
 */

int _islower(int d)
{

	if (d >= 97 && d <= 122)
		return (1);
	else
		return (0);
}
