#include <string.h>
#include <stdlib.h>
/**
 * _calloc - a
 * @nmemb: s1
 * @size: s2
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
int *a;
if (nmemb == 0 || size == 0)
return (NULL);
a = malloc(nmemb * size);
if (a == NULL)
return (NULL);
bzero(a, nmemb * size);
return (a);
}
