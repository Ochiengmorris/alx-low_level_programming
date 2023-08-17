#include "3-calc.h"

/**
 * main - main func
 * @argc: argument func
 * @argv: arg
 *
 * Return: ???
 */
int main(int argc, char *argv[])
{
	int arg1, arg2, result;
	int (*func)(int, int);
	char o;

	if (argc != 4)
	{
		printf("Error Input\n");
		exit(98);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error Input\n");
		exit(99);
	}

	o = *argv[2];

	if ((o == '/' || o == '%') && arg2 == 0)
	{
		printf("Error Input\n");
		exit(100);
	}
	result = func(arg1, arg2);

	printf("%d\n", result);

	return (0);
}
