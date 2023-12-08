#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * free_list - check the code
 * @head:n
 * Return: list_t.
*/
void free_list(list_t *head)
{
list_t *temp = head;
while (temp != NULL)
{
head = temp;
free(head->str);
temp = head->next;
free(head);
}
}
