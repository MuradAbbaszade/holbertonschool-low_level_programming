#include "main.h"
#include <stdio.h>
#include <stdlib.h>
int is_prime_n(int n, int m);
/**
 * is_prime_number - check the code
 * @n:input
 * Return: Always 0.
 */
int is_prime_number(int n)
{
    if (abs(n) == 1)
    return (0);
    return (is_prime_n(n, 2));
}
/**
 * is_prime_n - helper
 * @n:input
 * @m:input
 * Return: 0 or 1
 */
int is_prime_n(int n, int m)
{
    if (n == m)
    return (1);
    if(n % m == 0)
    return (0);
    return (is_prime_n(n, ++m));
}
