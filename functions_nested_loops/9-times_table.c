#include <stdio.h>
#include "main.h"
/**
 * times_table - check the code
 * void
 * Return: Always void.
 */
void times_table(void)
{
int i = 0, j = 0, n = 0, d = 0;
for (i = 0 ; i <= 9 ; i++)
{
for (j = 0 ; j <= 9 ; j++)
{
if (j == 0)
{
printf("%d, ", n);
}
else
{    
if (j == 9)
{
if (n < 10)
{
printf(" %d ", n);
}
else
{
printf("%d ", n);
}
}
else
{
if (n < 10)
{
printf(" %d, ", n);
}
else
{
printf("%d, ", n);
}
}
}
n = n + d;
}
n = 0;
d++;
printf("\n");
}
}
