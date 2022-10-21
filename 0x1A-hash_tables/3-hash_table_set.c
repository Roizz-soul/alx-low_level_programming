#include "hash_tables.h"
/**
  * hash_table_set - adds an alement to a hash table
  * @ht: hash table to be edited
  * @key: key
  * @value: value associated with the key
  * Return: 1 if succeeded, otherwise 0
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	const char *val;
	unsigned long int index;
	hash_node_t *temp, *new;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = hash_djb2(key) % ht->size;
	if (ht->array[index] == NULL)
	{
		new = malloc(sizeof(hash_node_t));
		if (new == NULL)
			return (0);
		val = strdup(value);
		if (val == NULL)
			return (0);
		new->key = key;
		new->value = val;
		new->next = NULL;

		ht->array[index] = new;

		return (1);
	}

	temp = ht->array[index];
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	val = strdup(value);
	if (val == NULL)
		return (0);
	new->key = key;
	new->value = val;
	new->next = temp;

	ht->array[index] = new;

	return (1);
}
