#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * clear_bit - check the code
 * @n:b
 * @index:index
 * Return: Always 0.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask;
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
mask = ~(1 << index);
*n = *n & mask;
return (1);
}
