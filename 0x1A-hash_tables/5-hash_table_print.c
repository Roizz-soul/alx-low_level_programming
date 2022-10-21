#include "hash_tables.h"
/**
  * hash_table_print - prints a hash table
  * @ht: the hash table to be printed
  */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int i;
	int flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (flag == 1 && ht->array[i] != NULL)
			printf(", ");
		temp = ht->array[i];
		while (temp != NULL)
		{
			printf("'%s': '%s'", temp->key, temp->value);
			temp = temp->next;
			if (temp != NULL)
				printf(", ");
		}
		if (ht->array[i] != NULL)
			flag = 1;
	}
	printf("}\n");
}
