#include "binary_trees.h"

#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define DIF(a, b) ((a) - (b))

/**
 * _binary_tree_height - Function that measures the height of a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: Height of the tree, if tree is NULL return 0
 */
int _binary_tree_height(const binary_tree_t *tree)
{
	return (tree ? MAX(
				_binary_tree_height(tree->left),
				_binary_tree_height(tree->right)
				) + 1 : 0);
}

/**
 * binary_tree_balance - Function that measures the height of a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: Height of the tree, if tree is NULL return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	return (tree ? DIF(
				_binary_tree_height(tree->left),
				_binary_tree_height(tree->right)
				) : 0);
}
