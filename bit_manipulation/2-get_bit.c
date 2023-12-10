#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * get_bit - check the code
 * @n:b
 * @index:index
 * Return: Always 0.
*/
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
unsigned long int a = n >> index;
int bit = a & 1;
return (bit);
}
