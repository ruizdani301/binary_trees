#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - created a binary tree node
 * @parent: pointer to node
 * @value: Value in the node
 * Return: pointer to the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *child_r;
	binary_tree_t *tmp;

	if (parent == NULL)
		return (NULL);
	child_r = malloc(sizeof(binary_tree_t));
	if (child_r == NULL)
		return (NULL);
	child_r->left = NULL;
	child_r->right = NULL;
	child_r->n = value;
	child_r->parent = parent;

	if (parent->right == NULL)
		parent->right = child_r;

	else
	{
		tmp = parent->right;
		parent->right = child_r;
		child_r->right = tmp;
		tmp->left = NULL;
		tmp->right = NULL;
		tmp->parent = child_r;
	}
	return (child_r);
}
