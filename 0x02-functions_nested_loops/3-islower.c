#include "main.h"
/**
 * _islower - prints 1 for lower or 0
 *@c: letter being tested
 * Return: always 0 (success)
 */
int _islower(int c)
{
if (c > 97 && c < 122)
return (1);
else
return (0);
}
