#include "binary_trees.h"

/**
 * binary_tree_delete - Recursive function that deletes an entire binary tree
 * @tree: Pointer to the root node of the tree
 * Return: 0
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
