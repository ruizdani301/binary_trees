#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_postorder - is a pointer to the root node
 * @tree: pointer to node
 * @func: pointer to a function to call for each node
 * Return: pointer to the new node
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
