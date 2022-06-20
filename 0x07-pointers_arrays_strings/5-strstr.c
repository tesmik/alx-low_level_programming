#include "main.h"
#include "stdio.h"
/**
 *_strstr - prints searching string
 *@haystack: strings being  
 *@needle: string being tested
 *Return: always 0.
 *or NULL if substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
char *tmp1 = haystack, *tmp2=needle;

while (*haystack)
{
tmp1 = haystack;
needle = tmp2;
while (*haystack == *needle)
{
haystack++;
needle++;
}
if (needle == '\0')
return (haystack);
haystack = tmp1 + 1;
}
return (NULL);
}
