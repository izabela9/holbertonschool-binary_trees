#include "binary_trees.h"
#include "proxy_height.c"

/**
 * binary_tree_uncle - Checks if the ode has uncles
 * @node: Node to be checked
 * Return: Nothing
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);
	else
		return (node->parent->parent->left);
}
