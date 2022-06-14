#include "main.h"
#include <stdio.h>
/**
 *_isupper - prints uppercase letter
 *@c: letter being tested
 *Return: always 0.
 */
int _isupper(int c)
{
if (c > 64 && c < 94)
return (1);
else
return (0);
}
