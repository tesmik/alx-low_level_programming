#include "main.h"
/**
 * leet - Entry point
 * @n: input
 * Return: Always 0 (Success)
 */
char *leet(char *s)
{
int i = 0, j;
char subs[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'}, str[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

while (s[i])
{
for (j = 0; j < 10; j++)
if (s[i] == str[j])
s[i] = subs[j];
i++;
}
return (s);
}
