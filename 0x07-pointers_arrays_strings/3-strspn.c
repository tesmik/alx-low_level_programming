#include "main.h"
/**
 *_strspn - print first string
 *@s: copy to
 *@accept: copy from
 *Return: bytes
 */
 unsigned int _strspn(char *s, char *accept)
{
int i = 0;

while(*s != ',')
{
i++;
s++;
}
return (i);
}
