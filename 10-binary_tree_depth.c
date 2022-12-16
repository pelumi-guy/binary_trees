#include "binary_trees.h"

/**
 * binary_tree_depth - a function that measures the
 * depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Description:
 * Return: Depth of node
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->parent)
		return (0);
	else
		return (1 + binary_tree_depth(tree->parent));
}
