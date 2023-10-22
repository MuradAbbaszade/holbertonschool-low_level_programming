#include <stdlib.h>
#include "ctype.h"
/**
 * _isdigit - function
 * @c:input
 * Return: 0 1.
 */
int _isdigit(int c)
{
if (isdigit(c))
return (1);
else
return (0);
}
