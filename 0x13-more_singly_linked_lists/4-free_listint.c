#include "lists.h"

/**
* free_listint - frees a listint_t list
* @head: head of list
* Return: no return
*/
void free_listint(listint_t *head)
{
	listint_t *c;

	while ((c = head) != NULL)
	{
		head = head->next;
		free(c);
	}
}
