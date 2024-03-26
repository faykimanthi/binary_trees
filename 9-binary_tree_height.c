#include "binary_trees.h"

/**
 * binary_tree_height - This measures the height of a binary tree.
 * @tree: Represents a pointer to the root node of the tree to measure the height.
 * Return: 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hlf = 0, hrg = 0;

	if (!tree)
		return (0);

	if (tree->left)
		hlf = 1 + binary_tree_height(tree->left);
	if (tree->right)
		hrg = 1 + binary_tree_height(tree->right);

	if (hlf > hrg)
		return (hlf);
	return (hrg);
}
