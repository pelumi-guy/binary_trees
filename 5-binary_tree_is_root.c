#include "binary_trees.h"

/**
 * binary_tree_is_root - a function that checks if a node is a root
 * @node: node to check
 * Description:
 * Return:	1 is node is root
 *		0 otherwise or node is NULL
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->parent)
		return (0);

	return (1);
}
