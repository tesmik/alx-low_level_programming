#include "main.h"
/**
 * print_alphabet - prints lower case alphabet
 *
 * Return - always 0 (success)
 */
void print_alphabet(void)
{
char low;

for (low = 'a'; low <= 'z'; low++)
{
_putchar(low);
}
_putchar('\n');
}
