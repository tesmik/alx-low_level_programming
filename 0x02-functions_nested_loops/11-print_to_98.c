#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - prints natural number
 *@n: number being tested
 *Return: always 0.
 */
void print_to_98(int n)
{
int x;
for (x = n; x < 99; x++)
{
printf("%d", x);
if (x != 98)
printf(", ");
else
continue;
}
}
