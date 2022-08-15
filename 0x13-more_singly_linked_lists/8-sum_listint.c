#include "lists.h"
/**
  * sum_listint - sums all the data(n) of a listint_t list
  * @head: pointer to list
  * Return: sum
  */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	if (temp == NULL)
		return (0);
	while (temp->next != NULL)
	{
		sum += temp->n
		temp = temp->next;
	}
	sum += temp->next;
	return (sum);
}
