#include "binary_trees.h"

/**
 * binary_tree_insert_left - a function that inserts a node
 * as the left-child of another node
 * @parent: parent node of new node
 * @value: data value stored in new node
 * Description:
 * Return: New binary tree node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (!parent)
		return (NULL);

	newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->right = NULL;
	newNode->left = parent->left;

	if (newNode->left)
		parent->left->parent = newNode;

	parent->left = newNode;

	return (newNode);
}
