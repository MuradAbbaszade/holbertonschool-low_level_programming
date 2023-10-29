/**
 * _strncpy - check the code
 * @dest:input
 * @src:input
 * @n:input
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
char *result = dest;
while (n > 0 && (*dest++ = *src++))
n--;
if (n > 0)
{
while (--n > 0)
{
*dest++ = '\0';
}
}
return (result);
}
