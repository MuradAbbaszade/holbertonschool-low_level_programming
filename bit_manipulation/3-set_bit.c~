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
unsigned long int a;
int bit;
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
a = n >> index;
bit = a & 1;
return (bit);
}
