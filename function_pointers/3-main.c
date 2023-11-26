#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - check the code
 * @argc:a
 * @argv:a
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int a, b, result;
char *op;
int (*f)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98)
}
a = atoi(argv[1]);
b = atoi(argv[3]);
op = argv[2];
f = get_op_func(op);
if (f == NULL)
{
printf("Error\n");
exit(99);
}
result = f(a, b);
printf("%d\n", result);
return (1);
}
