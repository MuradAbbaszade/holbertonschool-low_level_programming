#include "main.h"
#include <string.h>
/**
 * puts_half - check the code
 * @str:input
 * Return: Always 0.
 */
void puts_half(char *str)
{
int i, n, len = strlen(str);
if (len % 2 == 0)
n = len / 2;
else
n = (len - 1) / 2;
for (i = 0 ; i < len ; i++)
{
if (i >= n)
_putchar(*str);
str++;
}
_putchar('\n');
}
