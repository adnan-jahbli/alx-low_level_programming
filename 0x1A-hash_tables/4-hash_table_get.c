#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated
 * with a key from a hash table.
 * @ht: Pointer to the hash table.
 * @key: Key of the hash.
 *
 * Return: Value associated with the key, or NULL if not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int key_index;
	hash_node_t *current_node;

	if (!ht || !key || !*key)
		return (NULL);

	key_index = key_index((unsigned char *) key, ht->size);

	current_node = ht->array[key_index];

	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
			return (current_node->value);
		current_node = current_node->next;
	}

	return (NULL);
}
