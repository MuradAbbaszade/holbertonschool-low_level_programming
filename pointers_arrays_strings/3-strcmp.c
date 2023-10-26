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
int str1 = 0, str2 = 0;
while (*s1)
{
s1++;
str1++;
}
while (*s2)
{
s2++;
str2++;
}
if (str1 == str2)
return (0);
else if (str1 > str2)
return (15);
else
return (-15);
}
