#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * flip_bits - check the code
 * @n:b
 * @m:index
 * Return: Always 0.
*/
unsigned int count_set_bits(unsigned long int n)
{
unsigned int count = 0;
while (n) {
count += n & 1;
n >>= 1;
}
return (count);
}

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor_result = n ^ m;
return (count_set_bits(xor_result));
}
