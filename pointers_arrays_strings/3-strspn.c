#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strspn - check the code
 * @s:input
 * @accept:input
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
int len = strlen(s);
int len2 = strlen(accept);
unsigned int counter = 0;
int i, j;
for (i = 0 ; i < len && *(s + i) != ' ' ; i++)
{
for (j = 0 ; j < len2 ; j++)
{
if (*(s + i) == *(accept + j))
counter++;
}
}
return (counter);
}
