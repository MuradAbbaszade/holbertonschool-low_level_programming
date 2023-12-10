#include <stdio.h>
#include <string.h>
/**
 * binary_to_uint - check the code
 * @b:b
 * Return: Always 0.
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
int i = 0;
int len = strlen(b);
int j = 0;
int pow = 1;
if (b == NULL)
return (0);
for (i = len - 1 ; ((i != len - 10) && (i != -1)) ; i--)
{
if (b[i] != '0' && b[i] != '1')
return (0);
else if (b[i] == '1')
{
pow = 1;
for (j = 0 ; (j < (len - i - 1)) ; j++)
{
pow *= 2;
}
result += pow;
}
}
return (result);
}
