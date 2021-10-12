#include "lists.h"

/**
* pop_listint - deletes head node and return the head nodes data
* @head: head of list
* Return: 0 if linked list is empty
*/
int pop_listint(listint_t **head)
{
	int head_node;
	listint_t *h;
	listint_t *current;

	if (*head == NULL)
		return (0);

	current = *head;

	head_node = current->n;

	h = current->next;

	free(current);

	*head = h;

	return (head_node);
}
