#include "main.h"
/*
 * times_table - prints time
 *
 * Return: always 0 (success)
 */
void times_table(void)
{
int m, n, x, y, z, i;

for (x = 0; x < 24; x++)
{
for(y = 0; y < 60; y++)
{
z= x % 10;
i = x / 10;
m = y / 10;
n = y % 10;
_putchar(i + '0');
_putchar(z + '0');
_putchar(':');
_putchar(m + '0');
_putchar(n + '0');
}
}
return (0);
}
