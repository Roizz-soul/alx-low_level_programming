#include "lists.h"
/**
  * delete_nodeint_at_index - deletes a node at an index of the list
  * @head: pointer to the list
  * @index: position of element in the list
  * Return: 1 if it succeeded, -1 if it failed
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *temp1;
	unsigned int i;

	if (temp == NULL)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
	}
	temp1 = temp->next;
	temp->next = temp1->next;
	free(temp1);
	return (1);
}
