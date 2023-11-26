#include <stdio.h>

/**
 * array_iterator - prints an integer
 * @array: the integer to print
 * @size:size
 * @action:action
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (action == NULL)
return;
if (array == NULL)
return;
for (i = 0 ; i < size ; i++)
action(array[i]);
}
