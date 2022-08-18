#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - frees a list but head is null
 * @head: Double pointer to the head/first node of list_t
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *placeholder;

	if (head)
	{
		while (*head)
		{
			placeholder = *head;
			*head = placeholder->next;
			free(placeholder);
		}
	}
}
