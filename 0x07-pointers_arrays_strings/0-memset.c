#include "main.h"
#include "stdio.h"
/**
 *_memset - prints hex
 *@s: copy to
 *@b: copy from
 *@n: memory size
 *Return: always 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
char *tmp = s;
while (n--)
{
*s = b;
s++;
}
return (tmp);
}
