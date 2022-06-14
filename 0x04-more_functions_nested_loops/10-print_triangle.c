#include "main.h"
#include <stdio.h>
/**
 * print_triangle - prints triangle
 * @size: size being tested
 * Return: always 0.
 */
void print_triangle(int size)
{
int j, i, k;

for (j = 1; j <= size; j++)
{
for (k = j; k < size; k++)
_putchar(' ');
for (i = 1; i <= j; i++)
_putchar('#');
_putchar('\n');
}
}

