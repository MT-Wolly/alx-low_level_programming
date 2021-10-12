#include "lists.h"

/**
* sum_listint - sums all data of a linked list
* @head: head of list
* Return: sum of list. 0 if list is empty
*/
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
