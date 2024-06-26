#include "binary_trees.h"

avl_t *sorted_array_to_avl(int *array, size_t size);
avl_t *aux_sort(avl_t *parent, int *array, int begin, int last);

/**
 * sorted_array_to_avl - This builds an AVL tree from an array.
 * @array: Represents a pointer to the first element of the array to be converted.
 * @size: This is the number of element in the array
 *
 * Return: A pointer to the root node of the created AVL tree, NULL on failure.
 */
avl_t *sorted_array_to_avl(int *array, size_t size)
{
	if (array == NULL || size == 0)
		return (NULL);
	return (aux_sort(NULL, array, 0, ((int)(size)) - 1));
}

/**
 * aux_sort - This create the tree using the half element of the array.
 * @parent: Represents parent of the node to create.
 * @array: Represents sorted array.
 * @begin: Represents position where the array starts.
 * @last: Represents position where the array ends.
 *
 * Return: Tree created.
 */
avl_t *aux_sort(avl_t *parent, int *array, int begin, int last)
{
	avl_t *root;
	binary_tree_t *aux;
	int mid = 0;

	if (begin <= last)
	{
		mid = (begin + last) / 2;
		aux = binary_tree_node((binary_tree_t *)parent, array[mid]);
		if (aux == NULL)
			return (NULL);
		root = (avl_t *)aux;
		root->left = aux_sort(root, array, begin, mid - 1);
		root->right = aux_sort(root, array, mid + 1, last);
		return (root);
	}
	return (NULL);
}
