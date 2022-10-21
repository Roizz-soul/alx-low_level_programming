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
	hash_node_t *new;
	unsigned long int index;
	char *val, *k;

	new = malloc(sizeof(hash_node_t));
	val = strdup(value);
	k = strdup(key);

	if (ht && k && val && new && key && (value != NULL))
	{
		index = key_index((const unsigned char *)key, ht->size);
		new->key = k;
		new->value = val;
		new->next = ht->array[index];
		ht->array[index] = new;
		return (1);
	}
	free(new);
	free(val);
	free(k);
	return (0);
}
