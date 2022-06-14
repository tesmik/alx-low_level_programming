#include "main.h"
#include <stdio.h>
/**
 * more_numbers - prints 10 times   table
 *
 * Return: always 0.
 */
void more_numbers(void)
{
int j, k;
for (j = 0; j < 10; j++)
{
for (k = 0; k < 14; k++)
{
_putchar(k + '0');
}
_putchar('\n');
}
_putchar('\n');
}
