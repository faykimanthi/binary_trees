#include "binary_trees.h"

/**
 * binary_tree_insert_left - This inserts a node as the left-child of another node.
 *
 * @parent: Represents a pointer to the node to insert the left child in.
 * @value: This is the value to store the new node.
 *
 * Return: Represents a pointer to the created node, NULL if it fails.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
