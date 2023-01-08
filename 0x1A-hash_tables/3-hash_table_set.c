#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table to add or update the key/value
 * @key: the key of the value
 * @value: value associated with the key
 *
 * Return: 1 if successfull, 0 if not
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int i = 0;
    hash_node_t *elem = NULL, *new_node = NULL;

    if (ht == NULL || key == NULL || (strcmp(key, "") == 0))
        return (0);

    i = key_index((unsigned char *) key, ht->size);
    elem = ht->array[i];

    if (elem && strcmp(key, elem->key) == 0)
    {
        free(elem->value);
        elem->value = strdup(value);
        return (1);
    }

    new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL)
        return (0);

    new_node->key = strdup(key);
    new_node->value = strdup(value);
    new_node->next = ht->array[i];
    ht->array[i] = new_node;
    return (1);
}
