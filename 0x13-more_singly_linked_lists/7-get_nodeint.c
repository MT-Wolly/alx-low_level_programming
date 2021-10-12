#include "lists.h"

/**
* get_nodeint_at_index - checks for node at an index
* @head: head of node
* @index: index of node
* Return: NULL if node does not exist
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	return (head);
}
