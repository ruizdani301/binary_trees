#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - delete each node
 * @node: pointer to node
 * Return: pointer to the new node
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	return (0);
}
