#include "main.h"
#include <stdio.h>
/*main - print fizu fizz
 *
 * Return: always 0.
 */
int main(void)
{
int j;

for(j=1; j <= n; j++)
{
if (((j % 3) == 0) && ((j % 5) == 0))
printf("FizzBuzz ");
else if ((j % 3) == 0)
printf("frizz ");
else if ((j % 5) == 0)
printf("buzz ");
else
printf("%d ", j);
}
return (0);
}
