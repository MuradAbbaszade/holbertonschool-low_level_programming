#include <stdio.h>
/**
 * main : function
 * Return: 0 
*/
int main(void)
{
int i, j, k, a = 1, b = 2, y = 2;
for (i = 0 ; i < 10 ; i++)
{
for (j = a ; j < 10 ; j++)
{
for (k = b ; k < 10 ; k++)
{
putchar(i + '0');
putchar(j + '0');
putchar(k + '0');
if (i != 7)
{
putchar(',');
putchar(' ');
}
else
{
putchar('\n');
}
}
b++;
}
b = ++y;
a++;
}
return (0);
}
