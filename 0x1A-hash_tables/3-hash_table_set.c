#include "hash_tables.h"

/**
 * insert_hash_node - inserts a node at the beginning
 * of a hash at a given index.
 * @head: head of the hash linked list
 * @key: key of the hash
 * @value: value to store
 *
 * Return: head of the hash linked list
 */
hash_node_t *insert_hash_node(hash_node_t **head, const char *key,
const char *value) {
	hash_node_t *tmp, *new_node;

	tmp = *head;

	while (tmp != NULL)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (*head);
		}
		tmp = tmp->next;
	}

	new_node = (hash_node_t *) malloc(sizeof(hash_node_t));
	if (!new_node)
		return (NULL);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
/**
 * hash_table_set - a function that adds an element to the hash table
 * @ht: the hash table to add or update the key/value to
 * @key: is the key
 * @value: the value associated with the key
 *
 * Return: 1 if succeeded or 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	if (ht || key || *key)
		return (0);

	index = key_index((unsigned char *) key, ht->size);

	if (insert_hash_node(&(ht->array[index]), key, value) == NULL)
		return (0);

	return (1);
}
