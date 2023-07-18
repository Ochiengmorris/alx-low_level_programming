#include "main.h"

/**
 *times_table - print 9 times table
 *
 *return 0 success
 *
 */
void times_table(void)
{
int k, l, m;
for (k = 0; k < 10; k++)
{
for (l = 0; l < 10; l++)
{
m = l * k;
if (l == 0)
{
_putchar(m + '0');
}
if (m < 10 && l != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(m + '0');
}
else if (m >= 10)
{
_putchar(',');
_putchar(' ');
_putchar((m / 10) + '0');
_putchar((m % 10) + '0');
}
}
_putchar('\n');
}
}
