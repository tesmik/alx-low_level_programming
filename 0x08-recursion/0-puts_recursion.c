#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - prints string
 * @s: letter being tested
 */
void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
s++;
_puts_recursion(s);
}
else
_putchar('\n');
}
