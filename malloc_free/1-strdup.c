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
int size;
int i;
char *arr;
if (str == NULL)
{
return (NULL);
}
size = strlen(str) * sizeof(char);
if (size >= 4000)
arr = malloc(4110);
arr = malloc(size);
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
