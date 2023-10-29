#include <stdio.h>
#include <string.h>
/**
 * _memcpy - check the code
 * @dest:input
 * @src:input
 * @n:input
 * Return: Always 0.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
char *result = dest;
for (i = 0 ; i < n ; i++)
*(dest + i) = *(src + i);
return (result);
}
