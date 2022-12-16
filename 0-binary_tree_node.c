#include "binary_trees.h"

/**
 * binary_tree_node - a function that creates a binary tree node
 * @parent: parent node of new node
 * @value: data value stored in ew node*
 * Description:
 * Return: New binary tree node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);
}
