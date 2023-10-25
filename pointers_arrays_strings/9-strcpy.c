#include "main.h"
#include <stdio.h>

/**
 * _strcpy - check the code
 * @dest:input
 * @src:input
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
int index = 0;
while (src[index])
{
dest[index] = src[index];
index++;
}
return (dest);
}
