#include "main.h"
#include <stdio.h>

/**
 * _atoi - check the code
 * @s:input
 * Return: Always 0.
 */
int _atoi(char *s)
{
int found = 0, number = 0, is_negative = 1;
while (*s)
{
if (*s >= 48 && *s <= 57)
{
found = 1;
number = number * 10 + (*s - 48);
}
else if (*s == 45 && found == 0)
{
is_negative *= -1;
}
else
{
if (found == 1)
{
break;
}
}
s++;
}
number *= is_negative;
return (number);
}
