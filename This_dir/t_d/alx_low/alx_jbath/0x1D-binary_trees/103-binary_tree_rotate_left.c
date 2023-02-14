#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Function that performs a left
 * rotation on a binary tree
 * @tree: Pointer to the tree to rotate
 * Return: Pointer to the new tree root
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	bt_t *root = NULL;

	if (tree)
	{
		root = tree->right;
		if (root)
		{
			tree->right = root->left;
			if (tree->right)
				tree->right->parent = tree;
			root->left = tree;
			tree->parent = root;
			root->parent = NULL;
		}
	}
	return (root);
}
