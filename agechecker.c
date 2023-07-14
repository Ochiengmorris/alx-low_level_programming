#include <stdio.h>

/*
 *
 * main - entry point
 *
 * body - to be typed
 *
 * result (0) success
 *
 */
int main(void)
{
	char name[20];
	int bornYear;
	int cYear;
	int todayYear = 2023;
	int resultYear1;
	int resultYear2;

	printf("Hello, what is your name: ");
	scanf("%s", name);

	printf("Great! which year were you born: ");
	scanf("%d", &bornYear);

	printf("Okay %s, you want to know your age at which year: ", name);
	scanf("%d", &cYear);

	resultYear1 = cYear - todayYear;
	resultYear2 = cYear - bornYear;
	printf("Thanks for your patience %s, %d years later from now, you will be %d years old.\n", name, resultYear1, resultYear2);

	return (0);
}
