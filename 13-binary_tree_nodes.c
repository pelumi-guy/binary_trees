#include "binary_trees.h"

/**
 * binary_tree_nodes - a function that measures
 * the nodes of a binary tree
 * @tree: pointer to the root node of the tree to count nodes
 * Description:
 * Return: count of tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_count, right_count, count;

	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		count = 0;
	else
	{
		left_count = binary_tree_nodes(tree->left);
		right_count = binary_tree_nodes(tree->right);
		count = left_count + right_count + 1;
	}

	return (count);
}
