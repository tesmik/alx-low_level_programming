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
char w, e, q;
e = 'e';
q = 'q';
for (w = 'a'; w <= 'z'; w++)
{
if (w != e && w != q)
putchar(w);
}
return (0);
}
