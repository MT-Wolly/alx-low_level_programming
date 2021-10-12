#include "lists.h"

/**
* add_nodeint_end - adds new node at the end of a list
* @head: head of list
* @n: n element
* Return: address of new element. NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *c;

	(void)c;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	c = *head;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (c->next != NULL)
		{
			c = c->next;
		}
		c->next = new;
	}

	return (*head);
}
