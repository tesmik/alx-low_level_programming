#include<stdio.h>
#include <time.h>
#include<stdlib.h>
/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
int p, q;
for (p = 0; p <= 98; p++)
{
for (q = 0; p <= 99; q++)
{
putchar((p / 10) + '0');
putchar((p % 10) + '0');
putchar(' ');
putchar((q / 10) + '0');
putchar((q % 10) + '0');
if (p == 98 && q == 99)
continue;
putchar(',');
putchar(' ');
}
}
return (0);
}
