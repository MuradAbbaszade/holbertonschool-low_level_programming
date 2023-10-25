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
int i;
for (i = 0; src[i] != '\0'; i++)
dest[i] = src[i];
for ( ; src[i] !='\0'; i++)
dest[i] = '\0';
return dest;
}
