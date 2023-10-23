#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * print_rev -reverse
 * @s:input
 * Return: Always nothing.
 */
void print_rev(char *s)
{
int len = strlen(s);
int i;
for (i = 0 ; i < (len * 2) - 1 ; i++)
{
if (i < len - 1)
s++;
else
_putchar(*s--);
}
_putchar('\n');
}
