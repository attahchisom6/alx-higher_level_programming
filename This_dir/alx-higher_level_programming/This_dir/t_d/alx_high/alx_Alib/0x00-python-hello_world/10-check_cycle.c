#include <stdio.h>
#include "lists.h"

/**
 * check_cycle - checks if a singly linked list has a cycle in it
 *
 * @list: pointer to the head of the list
 *
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */

int check_cycle(listint_t *list)
{
	listint_t *hold, *temp;

	if (list == NULL)
	{
		return (0); /* list has no cycle */
	}
	hold = list; /* hold the address of list */
	temp = list; /* temp also holds the address of list */
	/* use temp to loop through linked list */
	while (temp->next != NULL)
	{
		temp = temp->next; /* go to next node */
		if (temp->next == hold) /* if address is of head is met */
		{
			return (1); /* list has a cycle */
		}
	}
	return (0); /* list has no cycle */
}
