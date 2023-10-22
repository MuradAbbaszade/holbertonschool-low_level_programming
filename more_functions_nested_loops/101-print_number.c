#include "main.h"
#include <stdio.h>

/**
 * print_number - Entry point
 *
 * @n: 'var
 *
 * Return: Always 0 (Success)
 */
void print_number(int n)
{
int i = 1;
if (n < 0)
{
_putchar('-');
n = -1 * n;
}
while ((n / i) / 10 != 0)
{
i = i * 10;
}
while(i != 1)
{
_putchar((n / i) + '0');
n = n % i;
i /= 10;
}
_putchar((n % 10) + '0');
}
