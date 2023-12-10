#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_binary - check the code
 * @n:b
 * Return: Always 0.
*/
void print_binary(unsigned long int n)
{
if (n != 1 && n != 0)
print_binary(n>>1);
_putchar((n & 1) + '0');
}
