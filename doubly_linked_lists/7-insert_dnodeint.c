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
dlistint_t *temp = head;
dlistint_t *result;
dlistint_t *new = NULL;
while (temp != NULL)
{
if (i == idx - 1)
{
temp->next = NULL;
new = add_dnodeint_end(&h, n);
new->next = temp->next->next
temp->next->next->prev = new;
break;
}
temp = temp->next;
i++;
}
return (new);
}
