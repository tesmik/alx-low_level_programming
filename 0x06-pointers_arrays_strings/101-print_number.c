#include "main.h"
/**
 * print_number - prints number
 * @n: number being tested
 * Return: always 0.
 */
void print_number(int n)
{
if (n >= 1000)
{
_putchar(n / 1000 + '0');
_putchar((n % 1000) / 100 + '0');
_putchar(((n % 1000) % 100 / 10 ) + '0');
_putchar(((n % 1000) % 100 % 10) + '0');
}
else if (n >= 100)
{
_putchar(n / 100 + '0');
_putchar((n % 100) / 10 + '0');
_putchar(((n % 100) % 1o) + '0');
}
else if (n >= 10)
{
_putchar(n / 10 + '0');
_putchar(n % 10+ '0');
}
else
_putchar(n % 10 + '0');
}
