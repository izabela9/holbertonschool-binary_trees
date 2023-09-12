#include "binary_trees.h"

/**
 * binary_tree_balance - Prints the balance of the tre
 * @tree: The tree
 * Returns: Balance
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right, balance;

	if (tree == NULL)
		return (0);
	
	left = binary_tree_balance(tree->left);
	right = binary_tree_balance(tree->right);
	balance = left - right;

	return (balance);
}
