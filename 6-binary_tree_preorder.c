#include "binary_trees.h"

/**
 * binary_tree_preorder - Does the pre-order traversal
 * @tree: pointer to root
 * @func: ponter to function
 * Return: Nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL && func == NULL)
		return;

	if (tree != NULL)
		func(tree->n);

	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
