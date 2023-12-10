#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * count_set_bits - check the code
 * @n:b
 * Return: Always 0.
*/
unsigned int count_set_bits(unsigned long int n)
{
unsigned int count = 0;
while (n)
{
count += n & 1;
n >>= 1;
}
return (count);
}
/**
 * flip_bits - a
 * @n:n
 * @m:m
 * Return:a
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor_result = n ^ m;
return (count_set_bits(xor_result));
}
