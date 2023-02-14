#include "my_shell.h"

/**
 * addvar_end - this function will add a variable at the end of a singly linked lists
 * @var_L: length of variable
 * @var_val;value of variable
 * @Lval:length of value
 */

var_t *addvar_end(var_t **head, int var_L, char *var_val, int Lval)
{
	var_t *new, *end;

	new = malloc(sizeof(var_t));
	if (new == NULL)
		return (NULL);
	new->var_len = var_L;
	new->var_value = var_val;
	new->value_len = Lval;
	new->next = NULL;

	end = *head;
	if (end == NULL)
		*head = new;
	else
	{
		while (end->next != NULL)
			end = end->next;
		end->next = new;
	}
	return (*head);
}

/**
 * free_var - will free space accumulated by var linked lists
 * @head:a double pointer that points to head
 *
 * Return:void
 */

void free_var(var_t **head)
{
	var_t *temp, *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}
