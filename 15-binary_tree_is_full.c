#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_size - is a pointer to the root node
 * @tree: pointer to node
 * Return: pointer to the new node
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);
	size += 1;
	size += binary_tree_size(tree->left);
	size += binary_tree_size(tree->right);

	return (size);
}

/**
 * binary_tree_is_full - is a pointer to the root node
 * @tree:  is a pointer to the root node of the tree to check
 * Return: pointer to the new node
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	left = (int)binary_tree_size(tree->left);
	right = (int)binary_tree_size(tree->right);
	if (left == right)
		return (1);
	else
		return (0);
}
