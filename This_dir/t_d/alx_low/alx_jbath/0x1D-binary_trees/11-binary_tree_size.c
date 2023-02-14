#include "binary_trees.h"

#define SUM(a, b) ((a) + (b))
/**
 * binary_tree_size - Function that measures the size of a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: Size of tree, if tree is NULL return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	return (tree ? SUM(
				binary_tree_size(tree->left),
				binary_tree_size(tree->right)
				) + 1 : 0);
}
