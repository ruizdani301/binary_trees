#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - created a binary tree node
 * @parent: pointer to node
 * @value: Value in the node
 * Return: pointer to the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *node_raiz;

    node_raiz = malloc(sizeof(binary_tree_t));
    if (node_raiz == NULL)
        return (NULL);
    node_raiz->parent = parent;
    node_raiz->n = value;
    node_raiz->left = NULL;
    node_raiz->right = NULL;
    return (node_raiz);
}
