#include "binary_trees.h"

/**
 * binary_tree_insert_left - adds a new node lon left
 * @parent: parent of node
 * @value: value of the new node
 * Return: a pointer to the created node or NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftNode = NULL;

	if (parent == NULL)
		return (NULL);

	leftNode = malloc(sizeof(binary_tree_t));

	if (leftNode == NULL)
		return (NULL);

	leftNode->n = value;
	leftNode->left = NULL;
	leftNode->right = NULL;
	leftNode->parent = NULL;
	if (parent->left != NULL)
	{
		leftNode->left = parent->left;
		leftNode->parent = parent;
		parent->left->parent = leftNode;
		parent->left = leftNode;
		leftNode->n = value;
	}
	else
	{
		parent->left = leftNode;
		leftNode->parent = parent;
		leftNode->n = value;
	}
	return (leftNode);
}
