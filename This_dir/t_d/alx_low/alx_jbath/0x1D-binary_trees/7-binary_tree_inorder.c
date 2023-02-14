#include "binary_trees.h"

/**
 * _binary_tree_inorder - Function that uses in-order traversal
 * @tree: Pointer to the root node of the tree
 * @func: Pointer to the function to call
 * Return: 0
 */
void _binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree)
	{
		_binary_tree_inorder(tree->left, func);
		func(tree->n);
		_binary_tree_inorder(tree->right, func);
	}
}
/**
 * binary_tree_inorder - Function that uses in-order traversal
 * @tree: Pointer to the root node of the tree
 * @func: Pointer to the function to call
 * Return: 0
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func)
		_binary_tree_inorder(tree, func);
}
