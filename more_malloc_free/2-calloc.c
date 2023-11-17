#include <stdlib.h>
/**
 * _calloc - a
 * @nmemb: s1
 * @size: s2
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
int *a;
if (nmemb == 0 || size == 0)
return (NULL);
a = malloc(nmemb * sizeof(int));
if (a == NULL)
return (NULL);
for (i = 0 ; i < nmemb ; i++)
a[i] = 0;
return (a);
}
