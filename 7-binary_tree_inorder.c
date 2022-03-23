#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_inorder - through a binary tree using pre-order
 * @tree: pointer to node
 * @func: pointer to a function to call for each node
 * Return: pointer to the new node
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
