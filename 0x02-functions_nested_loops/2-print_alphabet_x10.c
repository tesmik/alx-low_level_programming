#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet
 * 
 *
 * Return: always 0 (success)
 */
void print_alphabet_x10(void)
{
char low;
int i;

for (i = 0; i < 10; i++)
{
for (low = 'a'; low <= 'z'; low++)
{

_putchar(low);
}
_putchar('\n');
}
}
