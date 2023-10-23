#include "main.h"
#include <stdlib.h>
/**
 * _puts - check the code
 * @str:input
 * Return: Always 0.
 */
void _puts(char *str)
{
while (*str)
_putchar(*str++);
_putchar('\n');
}
