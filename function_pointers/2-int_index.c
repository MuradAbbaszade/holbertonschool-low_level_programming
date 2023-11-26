#include <stdio.h>

/**
 * int_index - aasd
 * @array: the integer to check
 * @size: a
 * @cmp: cmp
 * Return: 0 if false, something else otherwise.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL)
return (-1);
if (cmp == NULL)
return (-1);
if (size <= 0)
return (-1);
for (i = 0 ; i < size ; i++)
if (cmp(array[i]) != 0)
return (i);
return (-1);
}
