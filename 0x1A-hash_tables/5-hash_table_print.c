#include "hash_tables.h"

/**
 * hash_table_print - a function that prints the keys
 * and values of the hash table.
 * @ht: a pointer to the hash table
 *
 * Return: void.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	char *separ;
	hash_node_t *temp;

	if (ht == NULL)
		return;

	printf("{");
	separ = "";

	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			printf("%s'%s': '%s'", separ, temp->key, temp->value);
			separ = ", ";
			temp = temp->next;
		}
	}
	printf("}\n");
}
