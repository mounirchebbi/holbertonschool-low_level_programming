#include "hash_tables.h"
/**
 * hash_table_get - get value of key
 * @ht: pointer
 * @key: key
 * Return: key's value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int ind;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	ind = key_ind((const unsigned char *)key, ht->size);
	if (ind >= ht->size)
		return (NULL);
	node = ht->array[ind];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;
	return ((node == NULL) ? NULL : node->value);
}
