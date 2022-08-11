#include "lists.h"
/**
  * list_len - returns the number of the elements of a list_t list
  * @h: list name
  * Return: the number of nodes
  */
size_t list_len(const list_t *h)
{
	size_t n = 0;
	const list_t *temp = h;

	while (temp)
	{
		temp = temp->next;
		n++;
	}

	return (n);
}
