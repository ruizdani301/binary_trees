#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_sibling - delete each node
 * @node: pointer to node
 * Return: pointer to the new node
 */


binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}

