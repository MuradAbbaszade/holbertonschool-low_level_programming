#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_djb2 - check the code for
 * @str:str
 * Return: Always EXIT_SUCCESS.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
unsigned long int hash;
int c;
hash = 5381;
while ((c = *str++))
{
hash = (hash << 5) + hash;
hash += c;
}
return (hash);
}
