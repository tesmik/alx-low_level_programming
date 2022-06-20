#include "main.h"
/**
 *_strchr - search aa word
 *@s: copy to
 *@c: copy from
 *Return:s
 * or return NULL
 */
char *_strchr(char *s, char c)
{
while (*s)
{
if (c == *s){
return (s);
}
s++;
}
return (NULL);
}
