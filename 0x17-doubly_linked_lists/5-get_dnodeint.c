#include "lists.h"
/**
  * get_dnodeint_at_index - returns the nth node of a list
  * @head: list
  * @index: index of element to be gotten
  * Return: nth node or NULL if failed
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int count = 0;

	while (temp != NULL)
	{
		temp = temp->next;
		count++;
		if (count  == index)
			return (temp);
	}

	return (NULL);
}
