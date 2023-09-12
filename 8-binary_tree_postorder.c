#include "binary_trees.h"

/**
 * binary_tree_postorder - Does the post-order traversal
 * @tree: pointer to root
 * @func: ponter to function
 * Return: Nothing
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
