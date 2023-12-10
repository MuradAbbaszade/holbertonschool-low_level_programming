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
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
if (*h == NULL)
*h = new;
while (iter != NULL)
{
if (i == idx)
{
new->next = iter;
if (iter->prev != NULL)
iter->prev->next = new;
new->prev = iter->prev;
iter->prev=new;
new->next=iter;
break;
}
iter = iter->next;
i++;
}
if(new == NULL && i < idx)
new = add_dnodeint_end(head, n);
return (new);
}
