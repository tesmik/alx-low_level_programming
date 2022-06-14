#include "main.h"
#include <stdio.h>
/**
 * print_diagonal   prints diagonal line
 * @n: number being tested
 * Return: always 0.
 */
void print_diagonal(int n)
{
int k, j;

if (n > 0)
{
for (j = 0; j < n; j++)
{
for (k = 0; k < j; k++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
else
_putchar('\n');
}
