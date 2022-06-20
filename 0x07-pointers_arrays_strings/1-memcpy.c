#include "main.h"
#include "stdio.h"
/**
 * _memcpy - prints 
 * @dest: string tested
 * @src: string being tested
 * @n: size of array
 * Return: always 0.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *start = dest;

while (n--)
*dest = *src;
src++;
dest++;
return (start);
}
