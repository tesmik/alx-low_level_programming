#include "main.h"
/**
 *_strstr - prints searching string
 *@haystack: strings being  
 *@needle: string being tested
 *Return: always 0.
 */
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
