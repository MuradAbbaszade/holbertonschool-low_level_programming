#include "main.h"
#include <stdio.h>

/**
 * print_array - check the code for
 * @a:input
 * @n:input
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
int i;
for (i = 0 ; i < n ; i++)
{
if (i == n - 1)
printf("%d", *a++);
else
printf("%d, ", *a++);
}
printf("\n");
}
