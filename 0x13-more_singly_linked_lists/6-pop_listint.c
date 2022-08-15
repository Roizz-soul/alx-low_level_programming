#include "lists.h"
/**
  * pop_listint - deletes the head of a listint_t linked list
  * @head: pointer to list
  * Return: the head node's data(n)
  */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp = *head;

	if (temp == NULL)
		return (0);
	n = (*head)->n;
	*head = temp->next;
	free(temp);

	return (n);
}
