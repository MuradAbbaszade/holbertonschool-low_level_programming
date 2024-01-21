#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - Entry point
 * @array: array
 * @size: size
 * @value: value
 * Return: value index
 */
int binary_search(int *array, size_t size, int value)
{
int left = 0, right = size - 1, middle;
int i = 0;
while (left <= right)
{
middle = left + (right - left) / 2;
printf("Searching in array: ");
for (i = left ; i <= right ; i++)
{
printf("%d ", array[i]);
}
printf("\n");
if (array[middle] == value) return (middle);
else
{
if (array[middle] > value)
{
right = middle - 1;
}
else
{
left = middle + 1;
}
}
}
return (-1);
}
