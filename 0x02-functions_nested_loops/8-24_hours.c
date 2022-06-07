#include "main.h"
/*
 * times_table - prints time
 *
 * Return: always 0 (success)
 */
void times_table(void)
{
for (x = 0; x < 24; x++)
{
for(y = 0; y < 60; y++)
{
_putchar((x / 10) + '0');
_putchar((x % 10) + '0');
_putchar(':');
_putchar((y / 10) + '0');
_putchar((y % 10) + '0');
_putchar('\n');
}
}
}
