#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * cap_string - check the code
 * @str:input
 * Return: Always 0.
 */
char *cap_string(char *str)
{
char c;
int isSeperator = 0;
int i = 0, len = strlen(str);
while (i < len)
{
c = *(str + i);
if (c >= 97 && c <= 122 && i == 1)
*(str + i) = c - 32;
else if ((c >= 58 && c <= 63) || (c >= 33 && c <= 44) || c == 46
|| c == ' ' || c == '\t' || c == '\n')
isSeperator = 1;
else if (c >= 97 && c <= 122 && isSeperator == 1)
{
*(str + i) = c - 32;
isSeperator = 0;
}
else
isSeperator = 0;
i++;
}
return (str);
}
