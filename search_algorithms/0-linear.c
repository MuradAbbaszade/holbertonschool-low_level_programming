#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_seach - Entry point
 * @array: array
 * @size: size
 * @value: value
 * Return: index
 */
int linear_search(int *array, size_t size, int value)
{
size_t i;

if (!array)
return (-1);
for (i = 0 ; i < size ; i++)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
if (array[i] == value)
{
return (i);
}
}
return (-1);
}
