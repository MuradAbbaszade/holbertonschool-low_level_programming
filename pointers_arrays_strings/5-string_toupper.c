#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * string_toupper - check the code
 * @str:input
 * Return: Always 0.
 */
char *string_toupper(char *str)
{
int i = 0, len = strlen(str);
char c;
while (i < len)
{
c = *(str + i);
if (c >= 97 && c <= 122)
{
*(str + i) = c - 32;
}
i++;
}
return (str);
}
