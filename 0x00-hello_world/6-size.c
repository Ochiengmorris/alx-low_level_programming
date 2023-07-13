#include <stdio.h>

/**
 *
 * main - Entry points
 *
 * Return: 0 Success
 *
 */

int main(void)
{
	int i;
	char c;
	double d;
	float f;
	long int e;
	long long int a;

	printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Siz of a long int: %lu byte(s)\n", (unsigned long)sizeof(e));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));

	return (0);
}
