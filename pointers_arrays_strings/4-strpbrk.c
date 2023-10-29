#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - check the code
 * @s:input
 * @accept:input
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
int i, j;
int len = strlen(s), len2 = strlen(accept);
for(i = 0 ; i < len ; i++)
{
for (j = 0; j <len2 ; j++)
{
if (*(s + i) == *(accept + j))
{
return (s + i);
}
}
i++;
}
return (NULL);
}
