#include "main.h"

/**
 * print_diagonal - function
 * @n:input
 * Return: void.
 */
void print_diagonal(int n)
{
int i, j, k = 0;
if (n > 0)
{
for (i = 0 ; i < n ; i++)
{
if (k == 0)
{
_putchar('\\');
}
else
{
for (j = 0 ; j < k ; j++)
{
_putchar(' ');
}
_putchar('\\');
}
if (j != k - 1)
{
_putchar('\n');
}
k++;
}
}
else
{
_putchar('\n');
}
}

