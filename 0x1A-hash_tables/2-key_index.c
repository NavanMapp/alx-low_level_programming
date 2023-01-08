#include "hash_tables.h"

/**
 * key_index - computes the index of a given key
 * @key: the given key
 * @size: size of hash table
 *
 * Return: index of a hash table key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    return (hash_djb2(key) % size);
}
