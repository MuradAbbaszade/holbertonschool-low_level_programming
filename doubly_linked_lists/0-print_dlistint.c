#include <stdio.h>
#include "lists.h"
/**
 * print_list - check the code
 * @h:n
 * Return: Always 0.
*/
size_t print_list(const list_t *h)
{
unsigned int result = 0;
while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", h->len, h->str);
h = h->next;
result++;
}
return (result);
}
