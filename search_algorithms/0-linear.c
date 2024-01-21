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
int i;
for (i = 0 ; i < size ; i++)
{
printf("Value checked array[%d] = [%d]\n", i, array[i]);
if (array[i] == value)
{
return (i);
}
}
return (-1);
}
