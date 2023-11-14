#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - a
 * @b: t
 * Return: Nothing.
 */
void *malloc_checked(unsigned int b)
{
void *arr;
arr = malloc(b);
if (arr == NULL)
exit(98);
return (arr);
}
