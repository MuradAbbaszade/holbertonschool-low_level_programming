#include "main.h"
#include <stdio.h>

/**
 * _strcmp - check the code
 * @s1:input
 * @s2:input
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
while (*s1)
{
if (*s1 != *s2)
return (*s2 - *s1);
s1++;
s2++;
}
return (0);
}
