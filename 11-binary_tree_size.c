#include "binary_trees.h"

/**
 * binary_tree_size - Prints the size of the tree
 * @tree: The tree
 * Return: Function
 */


size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
