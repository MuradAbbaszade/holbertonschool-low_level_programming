#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
  * print_numbers - s
  * @separator: s
  * @n: s
  * Return: s
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
va_list args;
if (n > 0)
{
va_start(args, n);
for (i = 0 ; i < n ; i++)
{
printf("%d", va_arg(args, int));
if (i != n - 1  && separator != NULL)
printf("%s", separator);
}
va_end(args);
}
printf("\n");
}
