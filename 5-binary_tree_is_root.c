#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if the node is root
 * @node: Pointer
 * Return: 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
