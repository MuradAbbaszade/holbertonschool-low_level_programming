#include <stdio.h>
#include "main.h"
/**
 * print_triangle - check the code
 * @size:input
 * Return: Always 0.
 */
void print_triangle(int size)
{
if (size > 0)
{
int i, j, k = size - 1;
for (i = 0 ; i < size ; i++)
{
for (j = 0 ; j < size ; j++)
{
if (j < k)
_putchar(' ');
else
_putchar('#');
}
_putchar('\n');
k--;
}
}
else
{
_putchar('\n');
}
}
