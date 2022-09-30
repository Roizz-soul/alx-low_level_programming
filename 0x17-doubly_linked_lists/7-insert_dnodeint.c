#include "lists.h"
/**
  * insert_dnodeint_at_index - inserts a new node at a given position of a list
  * @h: list
  * @idx: index of element to be inserted
  * @n: integer to be inserted
  * Return: nth node or NULL if failed
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *node = malloc(sizeof(dlistint_t));
	unsigned int count = 0;

	if (node == NULL)
		return (NULL);
	node->n = n;
	node->prev = NULL;
	if (idx == 0)
	{
		node->next = temp;
		temp->prev = node;
		temp = node;

		return (node);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
		count++;
		if (count > 1 && temp == NULL)
			return (NULL);
		if (count  == idx)
		{
			(temp->prev)->next = node;
			node->prev = temp->prev;
			node->next = temp;
			temp->prev = node;
			return (node);
		}
	}
	if (count + 1 == idx)
		return (add_dnodeint_end(h, n));

	return (NULL);
}
