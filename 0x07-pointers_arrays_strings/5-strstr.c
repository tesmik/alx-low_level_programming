#include "main.h"
char *_strstr(char *haystack, char *needle)
{
char *tmp = haystack;

while (*needle)
{
while (*haystack)
{
if (*haystack == *needle)
return (haystack);
haystack++;
}
haystack = tmp;
needle++;
}
return (NULL);
}
