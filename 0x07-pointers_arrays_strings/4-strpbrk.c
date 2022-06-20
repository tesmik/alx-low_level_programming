#include "main.h"
#include "stdio,h"
/**
 *_strpbrk - prints the string
 *@s: copy to
 *@accept: copy from
 *Return: retur the string
 *or NULL if the string is not match.
 */
char *_strpbrk(char *s, char *accept)
{
char *tmp = accept;

while (*s)
{
while (*accept)
{
if (*accept == *s)
return (s);
accept++;
}
accept = tmp;
s++;
return (NULL);
}
