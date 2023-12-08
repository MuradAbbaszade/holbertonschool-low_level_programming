#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - check the code
 * @head:n
 * @str:str
 * Return: list_t.
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new = malloc(sizeof(list_t));
list_t *temp = *head;
if (new == NULL)
return (NULL);
new->str = strdup(str);
new->len = strlen(str);
new->next = NULL;
if (*head == NULL)
{
*head = new;
}
else
{
while(temp->next != NULL)
{
temp = temp->next;
}
temp->next = new;
}
return (new);
}
