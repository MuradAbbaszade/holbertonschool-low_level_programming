#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - check the code
 * @head:n
 * @index:index
 * Return: Always 0.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;
dlistint_t *temp = head;
dlistint_t *result = NULL;
while (temp != NULL)
{
if (i == index)
{
result = temp;
break;
}
temp = temp->next;
i++;
}
return (result);
}
