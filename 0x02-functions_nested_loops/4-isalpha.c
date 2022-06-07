#include "main.h"
/**
 * -isalpha - check the letter
 *@c letter being tested
 *  Return: alwasy 0 (success)
 */
int _isalpha(int c)
{
if (c >= 65 && c <= 122)
{
if (c >=90 && c <= 96)
return (0);
else 
return (1);
}
else
return (0);
}
