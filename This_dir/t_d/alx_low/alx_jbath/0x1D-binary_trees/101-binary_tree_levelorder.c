#include "binary_trees.h"

/**
 * create_queue_node - dynamically allocate and initialize a new queue node
 * @item: the binary tree node to insert
 * @pri: the priority of the item
 *
 * Return: a pointer to the new node
 */
pqueue_t *create_queue_node(const bt_t *item, size_t pri)
{
	pqueue_t *new = calloc(1, sizeof(*new));

	if (new)
	{
		new->item = item;
		new->pri = pri;

	}
	return (new);

}

/**
 * insert_sorted - insert an item into a sorted priority queue
 * @head: a double pointer to the front of a queue
 * @node: a pointer to the node to be added to the queue
 *
 * Return: a pointer to the new head of the queue
 */
pqueue_t *insert_sorted(pqueue_t **head, pqueue_t *node)
{
	if (head)
	{
		if (*head)
		{
			if (node->pri < (*head)->pri)
			{
				node->next = *head;
				*head = node;
				return (*head);

			}
			return (insert_sorted(&((*head)->next), node));

		}
		*head = node;
		return (*head);

	}
	return (NULL);

}

/**
 * binary_tree_to_queue - build the priority queue
 * @tree: the tree from which to construct a priority queue
 * @head: a double pointer to the front of the queue
 * @depth: current depth of recursion within this function
 *
 * Return: a pointer to the front of the queue
 */
pqueue_t *binary_tree_to_queue(const bt_t *tree, pqueue_t **head, size_t depth)
{
	if (tree)
	{
		binary_tree_to_queue(tree->left, head, depth + 1);
		binary_tree_to_queue(tree->right, head, depth + 1);
		insert_sorted(head, create_queue_node(tree, depth));

	}
	return (*head);

}

/**
 * binary_tree_levelorder - perform level-order traversal on a binary tree
 * @tree: the tree to traverse
 * @func: the function to apply
 */
void binary_tree_levelorder(const bt_t *tree, void (*func)(int))
{
	pqueue_t *head = NULL, *temp = NULL;

	if (tree && func)
	{
		binary_tree_to_queue(tree, &head, 0);
		if (head)
		{
			while ((temp = head))
			{
				func(head->item->n);
				head = head->next;
				free(temp);

			}


		}

	}

}
