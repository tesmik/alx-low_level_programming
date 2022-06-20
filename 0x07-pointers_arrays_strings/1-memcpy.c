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
int i;

for (i = 0; i < n; i++)
*(dest + i) = *(src + i);
*(dest + i) = '\0';
return (dest);
}
