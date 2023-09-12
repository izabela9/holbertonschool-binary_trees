#include "binary_trees.h"
#include "proxy_height.c"

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
	
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	balance = left - right;

	return (balance);
}
