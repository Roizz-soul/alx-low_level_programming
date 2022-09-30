#include "lists.h"
/**
  * dlistint_len - counts all the elements of a list
  * @h: list to be printed
  * Return: number of nodes
  */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t count = 0;

	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}

	return (count);
}
