#include "main.h"

/**
 * print_sign - good function.
 * @n : input
 * Return: 0 or 1.
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
_putchar('-');
return (-1);
}
