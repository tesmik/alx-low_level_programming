#include "main.h"
#include "stdio.h"
/**
 * print_chessboard - prints the cheese
 * @a: an array input
 * Return: non.
 */
void print_chessboard(char (*a)[8])
{
int i = 0, j;

for (; i < 8; i++)
{
for (j = 0; j < 8; j++)
_putchar(a[i][j]);
_putchar('\n');
}
}
