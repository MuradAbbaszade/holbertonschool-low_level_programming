#include <stdio.h>
#include <stdlib.h>
#include "calc.h"
/**
 * main - check the code
 * @argc:a
 * @argv[]:a
 * Return: Always 0.
 */
int main(int argc, char *argv[]) {
int a, b, result;
char *op;
int (*f)(int, int);
if (argc != 4)
return (0);
a = atoi(argv[1]);
b = atoi(argv[3]);
op = argv[2];
f = get_op_func(op);
if (f == NULL)
return (0);
result = f(a, b);
printf("%d\n", result);
return (0);
}
