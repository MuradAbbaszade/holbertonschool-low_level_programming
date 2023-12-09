#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - check the code
 * @h:n
 * Return: Always 0.
*/
size_t print_dlistint(const dlistint_t *h)
{
unsigned int result = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
result++;
}
return (result);
}
