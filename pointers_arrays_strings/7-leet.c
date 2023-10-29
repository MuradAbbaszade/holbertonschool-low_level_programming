#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * leet - check the code for
 * @str:input
 * Return: Always 0.
 */
char *leet(char *str)
{
int i, j;
int len = strlen(str);
char letters[] = {'a', 'e', 'o', 't', 'l'};
char numbers[] = {'4', '3', '0', '7', '1'};
for (i = 0 ; i < 5 ; i++)
{
for (j = 0 ; j < len ; j++)
{
if (str[j] == letters[i] || str[j] == letters[i] - 32)
*(str + j) = numbers[i];
}
}
return (str);
}
