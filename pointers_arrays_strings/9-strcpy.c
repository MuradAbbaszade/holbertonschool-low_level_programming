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
int len = strlen(src);
for (i = len ; i >= 0 ; i--)
*(dest + i) = *(src + i);
return (dest);
}
