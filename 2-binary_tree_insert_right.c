#include "binary_trees.h"

/**
 * binary_tree_insert_right - a function that inserts a node
 * as the right-child of another node
 * @parent: parent node of new node
 * @value: data value stored in new node
 * Description:
 * Return: New binary tree node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (!parent)
		return (NULL);

	newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = parent->right;


	if (newNode->right)
		parent->right->parent = newNode;

	parent->right = newNode;

	return (newNode);
}
