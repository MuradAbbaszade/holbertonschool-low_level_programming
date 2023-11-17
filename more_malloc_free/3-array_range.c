#include <string.h>
#include <stdlib.h>
/**
 * array_range - a
 * @min: s1
 * @max: s2
 * Return: 0
 */
int *array_range(int min, int max)
{
int i, *a;
if (min > max)
return (NULL);
a = malloc((max - min + 1) * sizeof(int));
if (a == NULL)
return (NULL);
for (i = min ; i <= max ; i++)
a[i - min] = i;
return (a);
}
