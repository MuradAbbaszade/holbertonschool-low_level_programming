#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strcat - check the code
 * @dest:input
 * @src:input
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
int dest_len = strlen(dest);
int n = strlen(src);
int i;
for (i = 0 ; i < n && src[i] != '\0' ; i++)
dest[dest_len + i] = src[i];
dest[dest_len + i] = '\0';
return (dest);
}
