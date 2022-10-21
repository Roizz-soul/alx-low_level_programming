#include "hash_tables.h"
/**
  * key_index - gives the index of a key
  * @key: key of the hash node
  * @size: size of the array of the hash table
  * Return: the index of the key/value pair
  */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
