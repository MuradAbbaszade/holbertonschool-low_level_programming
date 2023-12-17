#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - check the code
 * @ht:ht
 * Return: Always EXIT_SUCCESS.
 */
void hash_table_print(const hash_table_t *ht)
{
hash_node_t *iter;
unsigned long int i, flag = 0;
if (ht == NULL)
return;
putchar('{');
for (i = 0; i < ht->size; i++)
{
iter = ht->array[i];
if (iter != NULL)
{
while (iter != NULL)
{
if (flag == 1)
{
printf(", ");
}
printf("'%s': '%s'", iter->key, iter->value);
flag = 1;
iter = iter->next;
}
}
}
putchar('}');
putchar('\n');
}
