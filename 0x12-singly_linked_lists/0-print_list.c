#include "lists.h"
/**
  * print_list - prints all the elements of a list_t list
  * @h: list name
  * Return: the number of nodes
  */
size_t print_list(const list_t *h)
{
	size_t n = 0;
	const list_t *temp = h;

	while (temp)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", temp->len, temp->str);
		temp = temp->next;
		n++;
	}

	return (n);
}
