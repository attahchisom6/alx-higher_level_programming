#include "binary_trees.h"

#define SUM(a, b) ((a) + (b))
/**
 * binary_tree_nodes - Function that counts nodes
 * with at least 1 child in a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: Number of non-leaf nodes, if tree is NULL return 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!(tree->left || tree->right))
		return (0);

	return (SUM(
				binary_tree_nodes(tree->left),
				binary_tree_nodes(tree->right)
			   ) + 1);
}
