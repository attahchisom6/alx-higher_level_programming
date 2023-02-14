#include "binary_trees.h"

/**
 * binary_tree_insert_left - Function that inserts a
 * new node as the left child of a node
 * @parent: Pointer to the parent of the node to be created
 * @value: Value inserted into the new node
 * Return: A pointer to the new node, unless fails then return NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (parent)
	{
		new = binary_tree_node(parent, value);
		if (new)
		{
			if (parent->left)
			{
				new->left = parent->left;
				new->left->parent = new;
			}
			parent->left = new;
		}
	}
	return (new);
}
