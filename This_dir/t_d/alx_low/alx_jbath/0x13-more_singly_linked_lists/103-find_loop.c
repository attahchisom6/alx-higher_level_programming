#include "lists.h"

/**
  * *find_listint_loop - Function that finds the loop in a linked list
  * @head: pointer to head node
  * Return: address of the node where the loop starts or
  * NULL if there is no loop
  */
  listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head, *fast = head;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}
	return (0);
}
