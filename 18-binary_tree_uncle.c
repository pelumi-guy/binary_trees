#include "binary_trees.h"

/**
 * binary_tree_uncle - a function that finds the uncle of a node
 * @node: a pointer to the node to find the uncle
 * Description:
 * Return: a pointer to the uncle node or NULL if no uncle.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *grandparent;

	if (!node)
		return (NULL);

	parent = node->parent;

	if (!parent)
		return (NULL);

	grandparent = parent->parent;

	if (!grandparent)
		return (NULL);

	if (parent == grandparent->left)
	{
		if (grandparent->right == NULL)
			return (NULL);

		return (grandparent->right);
	}

	if (parent == grandparent->right)
	{
		if (grandparent->left == NULL)
			return (NULL);

		return (grandparent->left);
	}

	return (NULL);
}
