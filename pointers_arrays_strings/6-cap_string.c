#include "main.h"
#include <stdio.h>

/**
 * cap_string - check the code
 * @str:input
 * Return: Always 0.
 */
char *cap_string(char *str)
{
int isSeperator = 0;
while (*str)
{
if ((*str >= 58 && *str <= 63) || (*str >= 33 && *str <= 46)
|| *str == ' ' || *str == '\t' || *str == '\n')
isSeperator = 1;
else if (*str >= 97 && *str <= 122 && isSeperator == 1)
{
*str = *str - 32;
isSeperator = 0;
}
else
isSeperator = 0;
str++;
}
return (str);
}
