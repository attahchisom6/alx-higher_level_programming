#include "binary_trees.h"

/**
 * _binary_tree_preorder - Function that uses pre-order traversal
 * @tree: Pointer to the root node of the tree
 * @func: Pointer tot he function to call
 * Return: 0
 */
void _binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree)
	{
		func(tree->n);
		_binary_tree_preorder(tree->left, func);
		_binary_tree_preorder(tree->right, func);
	}
}

/**
 * binary_tree_preorder - Function that uses pre-order traversal
 * @tree: Pointer to the root node of the tree
 * @func: Pointer tot he function to call
 * Return: 0
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func)
		_binary_tree_preorder(tree, func);
}
