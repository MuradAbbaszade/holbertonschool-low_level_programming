#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_to_98 - check the code
 * @n:input
 * Return: Always void.
 */
void print_to_98(int n)
{
int i;
if (n < 98)
{
for (i = n ; i <= 98 ; i++)
{
if (i == 98)
{
putchar('0' + 9);
putchar('0' + 8);
}
else
{
printf("%d, ", i);
}
}
}
else
{
for (i = n ; i >= 98 ; i--)
{
if (i == 98)
{
putchar('0' + 9);
putchar('0' + 8);
}
else
{
printf("%d, ", i);
}
}
}
}
