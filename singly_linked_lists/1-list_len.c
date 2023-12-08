#include <stdio.h>
#include "lists.h"
/**
 * list_len - check the code
 * @h:n
 * Return: Always 0.
*/
size_t list_len(const list_t *h)
{
unsigned int result = 0;
while (h != NULL)
{
h = h->next;
result++;
}
return (result);
}
