#include "lists.h"
/**
  * insert_nodeint_at_index - inserts a new node at a given position
  * @head: pointer to list
  * @idx: index of the list where the new node should be added
  * @n: data to be added
  * Return: address of the new node or NULL
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = malloc(sizeof(listint_t)), *temp1;
	unsigned int i;

	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
		return (*head);
	}
	temp1 = *head;
	for (i = 0; i < (idx - 1); i++)
	{
		if (temp1 == NULL || temp1->next == NULL)
			return (NULL);
		temp1 = temp1->next;
	}
	temp->next = temp1->next;
	temp1->next = temp;

	return (temp);
}
