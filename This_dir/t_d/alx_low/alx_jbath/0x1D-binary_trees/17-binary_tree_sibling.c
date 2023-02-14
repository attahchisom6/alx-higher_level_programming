#include "binary_trees.h"

/**
 * binary_tree_sibling - Function that finds the sibling of a node
 * @node: Pointer to node
 * Return: Pointer to the sibling, if node is NULL or does not
 * have a sibling return NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node && node->parent)
	{
		if (node == node->parent->left)
			return (node->parent->right);

		if (node == node->parent->right)
			return (node->parent->left);
	}
	return (NULL);
}
