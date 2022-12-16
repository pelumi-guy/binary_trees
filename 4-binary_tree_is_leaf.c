#include "binary_trees.h"

/**
 * binary_tree_is_leaf - a function that checks if a node is a leaf
 * @node: node to check
 * Description:
 * Return:	1 if node is leaf
 *		0 otherwise or node is NULL
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
