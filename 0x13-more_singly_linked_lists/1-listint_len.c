#include "lists.h"
/**
  * listint_len - returns the number elements of a listint_t list
  * @h: pointer to a list
  * Return: number of nodes/elements
  */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;
	const listint_t *temp = h;

	while (temp)
	{
		temp = temp->next;
		n++;
	}

	return (n);
}
