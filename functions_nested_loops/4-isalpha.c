#include "main.h"

/**
 * _isalpha - check c is letter or not.
 * @c:input
 * Return:  0 or 1.
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) | (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
