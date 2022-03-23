#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
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


/**
 * binary_tree_is_leaf - delete each node
 * @node: pointer to node
 * Return: pointer to the new node
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
/**
 * binary_tree_is_full - is a pointer to the root node
 * @tree:  is a pointer to the root node of the tree to check
 * Return: pointer to the new node
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	if (binary_tree_is_leaf(tree))
		return (1);
	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);
	if (left == 0 || right == 0)
		return (0);
	return (1);
}


/**
 * binary_tree_is_perfect - is a pointer to the root node
 * @tree:   is a pointer to the root node of the tree to count
 * Return: pointer to the new node
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;
	int full = 0;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	full = binary_tree_is_full(tree);
	if (right == left && full == 1)
		return (1);
	return (0);

}
