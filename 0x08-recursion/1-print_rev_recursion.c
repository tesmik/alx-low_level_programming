#include "main.h"
#include <stdio.h>
/**
 *_print_rev_recursion - prints reverse of string
 *@s:string being processed
 *Return: always 0.
 */
void _print_rev_recursion(char *s)
{
if (*s != '\0')
_print_rev_recursion(s + 1);
else
return;
printf("%c", *s);
}
