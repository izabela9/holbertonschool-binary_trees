#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes a node
 * @tree: pointer
 * Return: Nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	if (tree->lefi != NULL)
	{
		binary_tree_delete(tree->left);
	}
	if (tree->right != NULL)
	{
		binary_tree_delete(tree->right);
	}

	free(tree);
}
