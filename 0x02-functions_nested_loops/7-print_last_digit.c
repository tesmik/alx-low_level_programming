#include "main.c"
/**
 *print_last_digit - prints last digit
 *@n: number being tested
 *Return: always 0 (success)
 */
int print_last_digit(int n)
{
if (n < 0)
n = -n;
_putchar(n + '0');
return (0);
}
