#include "hash_tables.h"
/**
  * hash_table_get - retrieves a value associated with a key
  * @ht: hash table
  * @key: key we're looking for
  * Return: value or NULL if not found
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (key == NULL || *key == '\n')
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
