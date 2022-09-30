#include "lists.h"
/**
  * sum_dlistint - sums all the elements of a list
  * @head: list to be summed up
  * Return: sum
  */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
