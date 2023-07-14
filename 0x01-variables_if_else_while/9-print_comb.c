#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point.
 *
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int f = 0;

	while (f < 10)
	{
		putchar(48 + f);
		if (f != 9)
		{
			putchar(',');
			putchar(' ');
		}
		f++;
	}
	putchar('\n');
	return (0);
}
