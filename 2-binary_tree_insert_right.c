#include "binary_trees.h"

/**
 * binary_tree_insert_right - This inserts a node as the right-child of a node.
 * @parent: Represents a pointer to the node to insert the right-child in.
 * @value: This is the value to store in the new node.
 * Return: Represents a pointer to the created node, NULL on failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
