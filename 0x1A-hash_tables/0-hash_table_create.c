#include "hash_tables.h"

/** 
 * has_table_create - creates a hash table.
 * @size: the size of the array
 *
 * Return: if an error occurs = NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *ht;
    unsigned long int i;

    ht = malloc(sizeof(hash_table_t));
    if (ht == NULL)
        return (NULL);

    ht->size = size;
    ht->array = malloc(sizeof(hash_node_t *) * size);
    if (ht->array == NULL)
        return (NULL);
    for (i = 0l i < size; i++)
        ht->array[i] = NULL;

    return (ht);
}
