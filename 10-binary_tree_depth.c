#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - is a pointer to the root node
 * @tree: pointer to node
 * Return: pointer to the new node
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree->parent == NULL)
		return (0);
	size_t cont = 0;

	cont = binary_tree_depth(tree->parent) + 1;
	return (cont);
}
