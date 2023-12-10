#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - check the code
 * @head:n
 * @index:index
 * Return: Always 0.
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
unsigned int i = 0;
dlistint_t *temp = *head;
int result = -1;
while (temp != NULL)
{
if (i == index)
{
if (temp->prev == NULL)
*head = temp->next;
if (temp->prev != NULL)
temp->prev->next = temp->next;
if (temp->next != NULL)
temp->next->prev = temp->prev;
free(temp);
result = 1;
break;
}
temp = temp->next;
i++;
}
return (result);
}
