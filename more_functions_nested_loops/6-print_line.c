#include "main.h"
#include <stdlib.h>
/**
 * print_line - function
 * @n:input
 * Return: void.
 */
void print_line(int n)
{
int i;
if (n > 0)
{
for (i = 0 ; i < n ; i++)
{
_putchar('_');
}
}
_putchar('\n');
}