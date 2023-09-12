#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Check if the tree is perfect
 * @tree: The tree
 * Return: 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int leftDepth, rightDepth;

	if (tree == NULL)
		return (0);

	leftDepth = binary_tree_is_perfect(tree->left);
	rightDepth = binary_tree_is_perfect(tree->right);
	if (leftDepth == rightDepth)
	{
		if (tree->left == NULL && tree->right == NULL)
			return (1);
		return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));
	}
	return (0);
}
