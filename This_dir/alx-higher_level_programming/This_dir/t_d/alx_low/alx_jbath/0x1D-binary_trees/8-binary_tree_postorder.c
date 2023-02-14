#include "binary_trees.h"

/**
 * _binary_tree_postorder - Function that uses post-order traversal
 * @tree: Pointer to root of the tree
 * @func: Pointer to the function to call
 * Return: 0
 */
void _binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree)
	{
		_binary_tree_postorder(tree->left, func);
		_binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}

/**
 * binary_tree_postorder - Function that uses post-order traversal
 * @tree: Pointer to root of the tree
 * @func: Pointer to the function to call
 * Return: 0
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func)
		_binary_tree_postorder(tree, func);
}
