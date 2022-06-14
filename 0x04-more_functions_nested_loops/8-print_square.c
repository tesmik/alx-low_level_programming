#include "main.h"
#include <stdio.h>
/**
 * print_square - print square
 *@size: sizes being tested
 *Return: always 0.
 */
void print_square(int size)
{
int k, j;

if (size > 0)
{
for (k = 0; k < size; k++)
{
for(j = 0; j < size; j++)
_putchar('#');
_putchar('\n');
}
}
else
_putchar('\n');
}
