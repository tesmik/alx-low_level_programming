#include "main.h"
#include <stdlib.h>
/**
 *_strdup - copy the string
 *@str: string to be copy
 *Return: 0.
 */
char *_strdup(char *str)
{
int i, len = 0;
char *duplicate;

if (str == NULL)
return (NULL);
for (i = 0; str[i]; i++)
len++;
duplicate = malloc(sizeof(char) * (len + 1)); 
if (duplicate == NULL)
return (NULL);
for (i=0; str[i]; i++)
duplicate[i] = str[i];
duplicate[len] = '\0';
return (duplicate);
}
