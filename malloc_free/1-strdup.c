#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - check the code
 * @str:input
 * Return: Always 0.
 */
char *_strdup(char *str)
{
int i;
char *arr;
if (str == NULL)
{
return (NULL);
}
arr = malloc((strlen(str) - 1) * sizeof(char));
if (arr == NULL)
{
return (NULL);
}
i = 0;
while (*str)
{
arr[i] = *str;
i++;
str++;
}
return (arr);
}
