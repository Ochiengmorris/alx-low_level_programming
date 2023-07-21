#include "main.h"
#include <stdio.h>

/**
 * main - Fizzbuzz test for multiples of 3 and 5
 *
 *
 * Return: Always 0
 */
int main(void)
{
	int y = 1;

	while (y < 101)
	{
		if (y % 3 == 0 && y % 5 == 0)
		{
			printf("%s", "FizzBuzz");
		}
		else if (y % 3 == 0)
		{
			printf("%s", "Fizz");
		}
		else if (y % 5 == 0)
		{
			printf("%s", "Buzz");
		}
		else
		{
			printf("%d", y);
		}

		if (y != 100)
		{
		printf(" ");
		}
		y++;
	}
	printf("\n");
	return (0);
}
