#include "binary_trees.h"

/**
 * binary_tree_leaves - a function that measures
 * the leaves of a binary tree
 * @tree: pointer to the root node of the tree to measure the leaves
 * Description:
 * Return: leaves of tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_count, right_count, count;

	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		count = 1;
	else
	{
		left_count = binary_tree_leaves(tree->left);
		right_count = binary_tree_leaves(tree->right);
		count = left_count + right_count;
	}

	return (count);
}
