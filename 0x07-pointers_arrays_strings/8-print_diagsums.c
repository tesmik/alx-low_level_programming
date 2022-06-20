#include "main.h"
#include "stdio.h"
/*
 *print_diagsums - print diagonal sum
 *@a: square matrix
 *@size: size of integers
 *Return: non
 */
void print_diagsums(int *a, int size)
{
int i = 0, mul = size * size, sum1 = 0, sum2 = 0;

for (; i < mul; i += size + 1)
sum1 += a[i];
for (i = size - 1; i < mul - 1; i += size - 1)
sum2 += a[i];
printf("%d, %d\n", sum1, sum2);
}
