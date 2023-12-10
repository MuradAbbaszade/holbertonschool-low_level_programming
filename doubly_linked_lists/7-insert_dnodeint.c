#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
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
dlistint_t *new;
dlistint_t *temp;
if (idx == 0)
{
new = add_dnodeint(h, n);
return (new);
}
while (iter != NULL)
{
if (i == idx)
{
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
temp = iter->prev;
new->next = iter;
iter->prev = new;
new->prev = temp;
temp->next = new;
}
i++;
iter = iter->next;
}
if (iter == NULL && i == idx)
new = add_dnodeint_end(h, n);
else if(iter == NULL && i > idx)
{
new = malloc(sizeof(dlistint_t));
new->n = n;
}
return (new);
}
