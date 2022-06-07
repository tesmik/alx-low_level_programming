#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - prints natural number
 *@n: number being tested
 *Return: always 0.
 */
void print_to_98(int n)
{
for (n = 1; n < 98; n++)
{
printf("%d",n);
if (n != 98)
printf(", ");
else
continue;
}
}
