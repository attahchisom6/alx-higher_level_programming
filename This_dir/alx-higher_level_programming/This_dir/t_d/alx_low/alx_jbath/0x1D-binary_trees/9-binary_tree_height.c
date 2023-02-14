#include "binary_trees.h"

#define MAX(a, b) ((a) > (b) ? (a) : (b))

/**
 * _binary_tree_height - Function that measures the height of binary tree
 * @tree: Pointer to the root of the tree
 * Return: Height of tree, if tree is NULL return 0
 */
size_t _binary_tree_height(const binary_tree_t *tree)
{
	return (tree ? MAX(
				_binary_tree_height(tree->left),
				_binary_tree_height(tree->right)
				) + 1 : 0);
}

/**
 * binary_tree_height - Function that measures the height of binary tree
 * @tree: Pointer to the root of the tree
 * Return: Height of tree, if tree is NULL return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	return (tree ? MAX(
				_binary_tree_height(tree->left),
				_binary_tree_height(tree->right)
				) : 0);
}
