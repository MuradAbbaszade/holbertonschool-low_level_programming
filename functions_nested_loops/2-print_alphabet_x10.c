#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times.
 *
 * Return: Always 0.
*/

void print_alphabet_x10(void)
{
int i = 10;
for (i = 0; i < 10; i++)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
