#include "main.h"
#include <stlib.h>
/**
 *create_array - prints character
 *@size: size of character
 *@c: character being tested
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int index;

if (size == 0)
return (NULL);
array = malloc(sizeof(char) * size);
if (array == NULL)
return (NULL);
for (index=0; index < size; index++)
array[index] = c;
return (array);
}
