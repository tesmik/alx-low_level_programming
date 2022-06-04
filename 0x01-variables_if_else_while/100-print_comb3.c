#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int d, e;
for (d = '0'; d <= '8'; d++)
{
putchar(d);
for (e = d++; e <= '9'; e++)
{putchar(e);
if (d != 0)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
