#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - check the code
 * @s:input
 * Return: Always 0.
 */
void rev_string(char *s)
{
int len = strlen(s), i = 0, j = len - 1;
char s2[len];
while (s[i])
{
    s2[i] = s[j];
    i++;
    j--;
}
strcpy(s, s2);
}
