#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table.
 * @size: the size of the array
 *
 * Return: a pointer to the newly created hash table or NULL
 * if something went wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	int i;

	table = (hash_table_t *) malloc(sizeof(hash_table));

	table->size = size;
	table->array = (hash_node_t **)
		calloc(table->size, sizeof(hash_node_t *));

	/* initializing all the items of hash table to NULL */
	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}
