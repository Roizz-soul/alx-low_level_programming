#include "lists.h"
/**
  * print_dlistint - prints all the elements of a list
  * @h: list to be printed
  * Return: number of nodes
  */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *temp = h;
	size_t count = 0;

	while (temp != NULL)
	{
		printf("%i\n", temp->n);
		temp = temp->next;
		count++;
	}

	return (count);
}
