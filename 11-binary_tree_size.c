#include "binary_trees.h"

/**
 * binary_tree_size - a function that measures
 * the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Description:
 * Return: size of tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size, right_size, size;

	if (!tree)
		return (0);

	if (!tree->left)
		left_size = 0;
	else
		left_size = binary_tree_size(tree->left);

	if (!tree->right)
		right_size = 0;
	else
		right_size = binary_tree_size(tree->right);

	size = left_size + right_size + 1;

	return (size);
}
