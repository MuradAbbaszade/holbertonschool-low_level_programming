#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - check the code
 * @s1:a
 * @s2:a
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
char *s3;
int i;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
s3 = malloc(sizeof(s1) + sizeof(s2));
if (s3 == NULL)
return (NULL);
i = 0;
while (*s1)
{
s3[i] = *s1;
s1++;
i++;
}
while (*s2)
{
s3[i] = *s2;
s2++;
i++;
}
return (s3);
}
