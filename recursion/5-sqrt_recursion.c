#include "main.h"
#include <stdio.h>

int _sqrt(int m, int n);

/**
 * _sqrt_recursion - check the code
 * @n:input
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_sqrt(n, 1));
}
/**
 * _sqrt - sqrt
 * @m:input
 * @n:input
 * Return: something
 */
int _sqrt(int m, int n)
{
if (n * n == m)
return (n);
if (m == n)
return (1);
return (_sqrt(m, ++n));
}
