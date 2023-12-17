#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_delete - check the code
 * @ht:ht
 * Return: Always EXIT_SUCCESS.
 */
void hash_table_delete(hash_table_t *ht)
{
hash_node_t *iter;
unsigned long int i;
for (i = 0; i < ht->size; i++)
{
if (ht->array[i] != NULL)
{
while (ht->array[i] != NULL)
{
iter = ht->array[i]->next;
free(ht->array[i]->key);
free(ht->array[i]->value);
free(ht->array[i]);
ht->array[i] = iter;
}
}
}
free(ht->array);
free(ht);
}
