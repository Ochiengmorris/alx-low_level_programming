#include "main.h"
/**
 * main - printing _putchar
 * Return: Alwys 0 (Success)
 */
int main(void)
{
	char new[] = "_putchar";

	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(new[c]);
	}
	_putchar('\n');
	return (0);
}
