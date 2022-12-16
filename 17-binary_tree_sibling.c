#include "binary_trees.h"

/**
 * binary_tree_sibling - a function that finds the sibling of a node
 * @node: a pointer to the node to find the sibling
 * Description:
 * Return: a pointer to the sibling node or NULL if no sibling.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (!node)
		return (NULL);

	parent = node->parent;

	if (!parent)
		return (NULL);

	if (node == parent->left)
	{
		if (parent->right == NULL)
			return (NULL);

		return (parent->right);
	}

	if (node == parent->right)
	{
		if (parent->left == NULL)
			return (NULL);

		return (parent->left);
	}

	return (NULL);
}
