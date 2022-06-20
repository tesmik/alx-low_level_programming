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
