#include "binary_trees.h"

/**
 * binary_tree_is_full - Function that checks if a binary tree is full
 * @tree: Pointer to the root node of the tree
 * Return: 1, if tree is NULL return 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left)
		return (!tree->right);

	if (!tree->right)
		return (!tree->left);

	return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));
}
