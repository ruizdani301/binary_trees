#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - is a pointer to the root node
 * @tree: pointer to node
 * Return: pointer to the new node
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_left, h_right;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	h_left = binary_tree_height(tree->left);
	h_right = binary_tree_height(tree->right);
	if (h_right <= h_left)
		return (h_left + 1);
	return (h_right + 1);
}
