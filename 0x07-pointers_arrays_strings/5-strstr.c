#include "main.h"
#include "stdio.h"
/**
 *_strstr - prints searching string
 *@haystack: strings being
 *@needle: string being tested
 *Return: return the string
 */
char *_strstr(char *haystack, char *needle)
{
char *tmp1 = haystack;
char *tmp2 = needle;

while (*haystack)
{
tmp1 = haystack;
needle = tmp2;
while (*haystack == *needle)
{
haystack++;
needle++;
}
if (*needle == '\0')
return (haystack);
haystack = tmp1 + 1;
}
return (NULL);
}
