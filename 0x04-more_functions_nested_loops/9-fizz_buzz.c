#include "main.h"
#include <stdio.h>
/**
 * main - print fizu fizz
 *
 * Return: always 0.
 */
int main(void)
{
int j;

printf("1");
for (j = 2; j <= 100; j++)
{
if (((j % 3) == 0) && ((j % 5) == 0))
printf(" FizzBuzz");
else if ((j % 3) == 0)
printf(" Fizz");
else if ((j % 5) == 0)
printf(" Buzz");
else
printf(" %d", j);
}
printf("\n");
return (0);
}
