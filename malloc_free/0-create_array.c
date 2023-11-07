#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - a
 * @c: t
 * @size: the size of the memory to print
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
if (size == 0)
return (NULL);
char *ar = malloc(size * sizeof(char));
ar[0] = c;
return (ar);
}
