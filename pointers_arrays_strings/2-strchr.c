#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strchr - check the code
 * @s:input
 * @c:input
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
int i;
int n = strlen(s);
char a;
for (i = 0 ; i < n ; i++)
{
a = *(s + i);
if (a == c)
break;
}
if (*(s + i) == c)
return (s + i);
return (NULL);
}
