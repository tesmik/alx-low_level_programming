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
int i;

for (i = 0; i < n; i++)
*(s + i) = b;
*(s + i) = '\0';
return(0);
}
