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
int w, e, q;
for (w = '0'; w <= '7'; w++)
{
for (e = w + 1; e <= '8'; e++)
{
for (q = e + 1; q <= '9'; q++)
{
putchar(w);
putchar(e);
putchar(q);
if (w == 7 && e == 8 && q ==9)
	continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
