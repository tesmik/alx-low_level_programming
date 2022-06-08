#include "main.h"
/**
 * times_table - prints time table
 *
 * Return: always 0.
 */
void times_table(void)
{
int x, y;

for (x = 0; x < 10; x++)
{
for (y = 0; y < 10; y++)
{
if ((x * y) < 10)
{
_putchar((x * y) + '0');
_putchar(',');
_putchar(' ');
_putchar(' ');
}
else if ((x * y) > 9)
{
_putchar(((x * y) / 10) + '0');
_putchar(((x * y) % 10) + '0');
_putchar(',');
_putchar(' ');
}
else
{
_putchar((x * y) + '0');
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
