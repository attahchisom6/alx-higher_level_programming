#include "binary_trees.h"

/**
 * binary_tree_insert_right - Function that inserts a
 * new node as the right child of a node
 * @parent: Pointer to the parent of the node to be created
 * @value: Value to be inserted into the new node
 * Return: Pointer to the new node, unless fails then return NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (parent)
	{
		new = binary_tree_node(parent, value);
		if (new)
		{
			if (parent->right)
			{
				new->right = parent->right;
				new->right->parent = new;
			}
			parent->right = new;
		}
	}
	return (new);
}
