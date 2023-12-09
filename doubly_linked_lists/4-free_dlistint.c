#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - check the code
 * @head:head
 * Return: Always 0.
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;
temp = head;
while (head != NULL)
{
temp = head;
head = head->next;
free(temp);
}
}
