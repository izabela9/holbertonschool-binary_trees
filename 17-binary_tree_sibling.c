#include "binary_trees.h"

/**
 * binary_tree_sibling - Checks if the node has siblings
 * @node: The node to be checked
 * Return: Nothing
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (0);

	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
