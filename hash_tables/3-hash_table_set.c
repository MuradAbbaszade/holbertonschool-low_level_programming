#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_set - check the code
 * @ht:ht
 * @key:key
 * @value:value
 * Return: Always EXIT_SUCCESS.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t **arr, *new_node, *h_node;
int index;
if (ht == NULL)
return (0);
arr = ht->array;
index = key_index((unsigned *char)key, ht->size);
h_node = arr[index];
while (h_node != NULL)
{
if (strcmp(h_node->key, (char *)key) == 0)
{
free(h_node->value);
h_node->value = strdup((char *)value);
return (1);
}
h_node = h_node->next;
}
new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)
return (0);
new_node->value = strdup((char *)value);
new_node->key = strdup((char *)key);
if (!(arr[index]))
{
new_node->next = NULL;
arr[index] = new_node;
}
else
{
h_node = arr[index];
new_node->next = h_node;
arr[index] = new_node;
}
return (1);
}
