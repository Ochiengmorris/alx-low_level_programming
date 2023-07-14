#include <stdio.h>

/**
* main - entry point printing base 16 digits
*
* Return: Always 0 (Success)
*/
int main(void)
{
		char baze16;

		for (baze16 = '0'; baze16 <= '9'; baze16++)
		putchar(baze16);

		for (baze16 = 'a'; baze16 <= 'f'; baze16++)
		putchar(baze16);

		putchar('\n');

	return (0);
}
