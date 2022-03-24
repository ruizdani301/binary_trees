#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_uncle -  is a pointer to the node to find the uncle
 * @node: pointer to node
 * Return: pointer to the new node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
