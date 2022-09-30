#include "lists.h"
/**
  * delete_dnodeint_at_index - inserts a new node at a given position of a list
  * @head: list
  * @index: index of element to be inserted
  * Return: 1 or -1 if failed
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head, *temp2;
	unsigned int count = 0;

	if (index == 0 && temp != NULL)
	{
		(*head) = (*head)->next;
		(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
		count++;
		if (count  == index)
		{
			temp2 = temp;
			(temp->prev)->next = temp->next;
			(temp->next)->prev = temp->prev;
			free(temp2);
			return (1);
		}
	}

	return (-1);
}
