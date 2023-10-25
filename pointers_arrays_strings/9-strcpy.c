#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcpy - check the code
 * @dest:input
 * @src:input
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
int i;
int n = strlen(src);
for (i = 0; src[i] != '\0' && i < n; i++)
dest[i] = src[i];
for ( ; i < n; i++)
dest[i] = '\0';
return (dest);
}
