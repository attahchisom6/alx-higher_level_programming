#include "binary_trees.h"

/**
 * binary_tree_sibling - Function that fins the sibling of a given node
 * @node: Pointer to the node
 * Return: Pointer to the sibling, if node is NULL or
 * does not have a sibling return NULL
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

/**
 * binary_tree_uncle - Function that checks for a node's uncle
 * @node: Pointer to the node
 * Return: Pointer to the uncle, if node is NULL or has no unlce return NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	return (node ? binary_tree_sibling(node->parent) : NULL);
}
