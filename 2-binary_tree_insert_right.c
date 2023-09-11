#include "binary_trees.h"

/**
 * binary_tree_insert_right - adds a new node on right
 * @parent: parent of node
 * @value: value of the new node
 * Return: a pointer to the created node or NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rightNode = NULL;

	if (parent == NULL)
		return (NULL);

	rightNode = malloc(sizeof(binary_tree_t));

	if (rightNode == NULL)
		return (NULL);

	rightNode->n = value;
	rightNode->left = NULL;
	rightNode->right = NULL;
	rightNode->parent = NULL;
	if (parent->right != NULL)
	{
		rightNode->right = parent->right;
		rightNode->parent = parent;
		parent->right->parent = rightNode;
		parent->right = rightNode;
		rightNode->n = value;
	}
	else
	{
		parent->right = rightNode;
		rightNode->parent = parent;
		rightNode->n = value;
	}
	return (rightNode);
}
