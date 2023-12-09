#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - check the code
 * @h:n
 * @idx:index
 * @n:n
 * Return: Always 0.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int i = 0;
dlistint_t *iter = *h;
dlistint_t *temp;
dlistint_t *new = NULL;
if (h == NULL)
new = add_dnodeint_end(h, n);
while (iter != NULL)
{
if (i == idx - 1)
{
temp = iter->next;
iter->next = NULL;
new = add_dnodeint_end(h, n);
if (new == NULL)
return (NULL);
new->next = temp;
temp->prev = new;
break;
}
iter = iter->next;
i++;
}
return (new);
}
