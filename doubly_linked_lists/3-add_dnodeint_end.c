#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - check the code
 * @head:head
 * @n:n
 * Return: Always 0.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new;
dlistint_t *temp;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->prev = *head;
new->next = NULL;
if (*head!=NULL)
{
temp = *head;
while (temp->next != NULL)
temp = temp->next;
temp->next = new;
}
else
*head = new;
return (new);
}
