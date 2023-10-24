#include "main.h"
#include <string.h>
/**
 * puts2 - check the code
 * @str:input
 * Return: Always 0.
 */
void puts2(char *str)
{
int i, len = strlen(str);
for (i = 0 ; i < len ; i++)
{
if (i % 2 == 0)
putchar(*str);
*str++;
}
putchar('\n');
}
